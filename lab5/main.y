%{
    #include "common.h"
    #define YYSTYPE TreeNode *  
    TreeNode* root;
    IdTable* idtable = new IdTable();
    extern int lineno;
    int yylex();
    int yyerror( char const * );
%}
%token CHAR INT BOOL VOID

%token IDENTIFIER INTEGER CHARVALUE STRING
%token IF ELSE WHILE FOR
%token LPAREN RPAREN LBRACE RBRACE SEMICOLON STARY
%token ASSIGN PLUS MINUS
%token TRUE FALSE
%token PRINTF SCANF
%token ADD SUB MUL DEV MOD GETV NOT EQUAL LARGE LEQ SMALL SEQ NEQ TADD TSUB
%token AND OR


%right ASSIGN PLUS MINUS
%left AND OR
%left EQUAL NEQ
%left LARGE LEQ SMALL SEQ
%left ADD SUB
%left MUL DEV MOD
%right TADD TSUB
%left NOT GETV UMINUS
%nonassoc LOWER_THEN_ELSE
%nonassoc ELSE 

%%

program
    :submodules {
        root = new TreeNode(0, NODE_PROG); root->addChild($1);
    }
    ;

submodules
    :submodule{$$ = $1;}
    |submodules submodule{$$=$1;$$->addSibling($2);}
    ;

submodule
    :statement{$$=$1;}
    |function{$$=$1;}
    |block{$$=$1;}
    ;

block
    :LBRACE statements RBRACE{
        TreeNode *node=new TreeNode($2->lineno,NODE_BLOCK);
            node->addChild($2);
            $$=node;
    }
    ;

statements
    :  statement {$$=$1;}
    |  statements statement {$$=$1; $$->addSibling($2);}
    ;

function
    : type IDENTIFIER LPAREN RPAREN block{
        TreeNode *node=new TreeNode($1->lineno,NODE_FUNC);
            node->addChild($1);
            node->addChild($2);
            node->addChild($5);
            $$=node;
    }
    ;

statement
    : empty {$$=$1;}
    | declaration {$$=$1;}
    | assign_stmt{$$=$1;}
    | compound {$$=$1;}
    | IO {$$=$1;}
    ;

empty
    :SEMICOLON{$$ = $1;}
    ;

declaration
    :type idlist SEMICOLON{
        TreeNode *node=new TreeNode($1->lineno,NODE_STMT);
        node->stype=STMT_DECL;
        node->addChild($1);
        node->addChild($2);
        TreeNode* current = $2;
        while(current != nullptr){
            idtable->addID(new IDinfo(current->var_name,$1->type));
            current = current->sibling;
        }
        $$=node;
    }
    |type IDENTIFIER ASSIGN assign_expr SEMICOLON{
        TreeNode *node=new TreeNode($1->lineno,NODE_STMT);
        node->stype=STMT_DECL;
        node->addChild($1);
        node->addChild($2);
        node->addChild($4);
        idtable->addID(new IDinfo($2->var_name,$1->type,"initialization"));
        $$=node;
    }
;
idlist
    : IDENTIFIER{$$ = $1;}
    | idlist STARY IDENTIFIER{$$ = $1; $$->addSibling($3);}
    ;
assign_stmt
    : IDENTIFIER ASSIGNOP expr SEMICOLON {
            TreeNode *node=new TreeNode($1->lineno,NODE_STMT);
            node->stype=STMT_ASSIGN;
            node->addChild($1);
            node->addChild($3);
            idtable->changeValue($1->var_name,"changed");
            $$=node;  
        }
    ;
compound
    :if_else{$$=$1;}
    |while{$$=$1;}
    |for{$$=$1;}
    ;

if_else
    : IF bool_statment com_statement %prec LOWER_THEN_ELSE {
        TreeNode *node=new TreeNode($2->lineno,NODE_STMT);
        node->stype=STMT_IF_ELSE;
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
    | IF bool_statment com_statement ELSE com_statement {
        TreeNode *node=new TreeNode($2->lineno,NODE_STMT);
        node->stype=STMT_IF_ELSE;
        node->addChild($2);
        node->addChild($3);
        node->addChild($5);
        $$=node;
    }
    ;
while
    : WHILE bool_statment com_statement {
        TreeNode *node=new TreeNode($2->lineno,NODE_STMT);
        node->stype=STMT_WHILE;
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
    ;
for 
    :FOR LPAREN firstexpr SEMICOLON expr SEMICOLON expr RPAREN com_statement {// for (...;...;...) 
        TreeNode *node=new TreeNode($3->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild($3);
        node->addChild($5);
        node->addChild($7);
        node->addChild($9);
        $$=node;
    }

	|FOR LPAREN firstexpr SEMICOLON expr SEMICOLON RPAREN com_statement {// for (...;...;)
        TreeNode *node=new TreeNode($3->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild($3);
        node->addChild($5);
        node->addChild($7);
        node->addChild($8);
        $$=node;
    }
										
    |FOR LPAREN firstexpr SEMICOLON  SEMICOLON expr RPAREN com_statement {// for (...;;...) 
        TreeNode *node=new TreeNode($3->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild($3);
        node->addChild($6);
        node->addChild($8);
        $$=node;
    }
	|FOR LPAREN firstexpr SEMICOLON  SEMICOLON  RPAREN com_statement  {// for (...;;)
        TreeNode *node=new TreeNode($3->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild($3);
        node->addChild($7);
        $$=node;
    }
	|FOR LPAREN  SEMICOLON expr SEMICOLON expr RPAREN com_statement   {// for (;...;...)
		TreeNode *node=new TreeNode($4->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild($4);
        node->addChild($6);
        node->addChild($8);
        $$=node;								
	}
	|FOR LPAREN  SEMICOLON expr SEMICOLON  RPAREN com_statement  {// for (;...;) 
		TreeNode *node=new TreeNode($4->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild($4);
        node->addChild($7);
        $$=node;								
	}									
	|FOR LPAREN  SEMICOLON  SEMICOLON expr RPAREN com_statement   {// for (;;...) 
        TreeNode *node=new TreeNode($5->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild($5);
        node->addChild($7);
        $$=node;								
	}
										
	|FOR LPAREN  SEMICOLON  SEMICOLON  RPAREN com_statement    {
        TreeNode *node=new TreeNode($6->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild($6);
        $$=node;	
    }
    ;
firstexpr
    :assign_expr{$$=$1;}
    |type idlist{
        TreeNode *node=new TreeNode($1->lineno,NODE_STMT);
        node->stype=STMT_DECL;
        node->addChild($1);
        node->addChild($2);
        TreeNode* current = $2;
        while(current != nullptr){
            idtable->addID(new IDinfo(current->var_name,$1->type));
            current = current->sibling;
        }
        $$=node;
    }
    |type IDENTIFIER ASSIGN assign_expr{
        TreeNode *node=new TreeNode($1->lineno,NODE_STMT);
        node->stype=STMT_DECL;
        node->addChild($1);
        node->addChild($2);
        node->addChild($4);
        idtable->addID(new IDinfo($2->var_name,$1->type,"initialization"));
        $$=node;
    }
    ;
com_statement
    :statement{$$=$1;}
    |block{$$=$1;}
    ;
bool_statment
    : LPAREN bool_expr RPAREN {$$=$2;}
    ;
IO
    : printf SEMICOLON {$$=$1;}
    | scanf SEMICOLON {$$=$1;}
    ;

printf
    : PRINTF LPAREN expr RPAREN {
        TreeNode *node=new TreeNode($3->lineno,NODE_STMT);
        node->stype=STMT_PRINTF;
        node->addChild($3);
        $$=node;
    }
    |PRINTF LPAREN STRING STARY expr RPAREN {
        TreeNode *node=new TreeNode($3->lineno,NODE_STMT);
        node->stype=STMT_PRINTF;
        node->addChild($3);
        node->addChild($5);
        char ch[100];
        strcpy(ch,$3->str_val.c_str());
        for(size_t i = 1;i < strlen(ch) - 1;i++){
            if(ch[i] == '%'){
                node->IOlist += '%';
                node->IOlist += ch[i + 1];
                node->IOlist += ' ';
            }
        }
        $$=node;
    }
        
    
    ;

scanf
    : SCANF LPAREN STRING STARY inexpr RPAREN {
        TreeNode *node=new TreeNode($3->lineno,NODE_STMT);
        node->stype=STMT_SCANF;
        node->addChild($3);
        node->addChild($5);
        char ch[100];
        strcpy(ch,$3->str_val.c_str());
        for(size_t i = 1;i < strlen(ch) - 1;i++){
            if(ch[i] == '%'){
                node->IOlist += '%';
                node->IOlist += ch[i + 1];
                node->IOlist += ' ';
            }
        }
        $$=node;
    }
    ;

inexpr
    : GETV IDENTIFIER{$$=$2;}
    | inexpr STARY GETV IDENTIFIER{$$=$1;$$->addSibling($4);}
    ;
bool_expr
    : TRUE {$$=$1;}
    | FALSE {$$=$1;}
    | logic_expr{$$=$1;}
    ;
basic_expr
    : IDENTIFIER {$$=$1;}
    | const {$$=$1;}
    | LPAREN expr RPAREN {$$=$2;}
    ;
back_expr
    :basic_expr{$$=$1;}
    |back_expr TADD{
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_2ADD;
        node->addChild($1);
        $$=node;  
    }
    |back_expr TSUB{
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_2SUB;
        node->addChild($1);
        $$=node;  
    }
    ;
front_expr
    :back_expr{$$=$1;}
    |TADD front_expr{
        TreeNode *node=new TreeNode($2->lineno,NODE_EXPR);
        node->optype=OP_2ADD;
        node->addChild($2);
        $$=node;  
    }
    |TSUB front_expr{
        TreeNode *node=new TreeNode($2->lineno,NODE_EXPR);
        node->optype=OP_2SUB;
        node->addChild($2);
        $$=node;  
    }
    ;
unary_expr
    :front_expr {$$=$1;}
    |NOT unary_expr %prec LOWER_THEN_ELSE{
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_NOT;
        node->addChild($2);
        $$=node;  
    }
    |SUB unary_expr %prec LOWER_THEN_ELSE{
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_SUB;
        node->addChild($2);
        $$=node;  
    }
;
muldevmode_expr
    :unary_expr{$$=$1;}
    |muldevmode_expr MUL unary_expr{
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_MUL;
        node->addChild($1);
        node->addChild($3);
        $$=node;  
    }
    |muldevmode_expr DEV unary_expr{
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_DEV;
        node->addChild($1);
        node->addChild($3);
        $$=node;  
    }
    |muldevmode_expr MOD unary_expr{
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_MOD;
        node->addChild($1);
        node->addChild($3);
        $$=node;  
    }
;
addsub_expr
    :muldevmode_expr{$$=$1;}
    |addsub_expr ADD muldevmode_expr{
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_ADD;
        node->addChild($1);
        node->addChild($3);
        $$=node;  
    }
    |addsub_expr SUB muldevmode_expr{
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_SUB;
        node->addChild($1);
        node->addChild($3);
        $$=node;  
    }
    ;
relation_expr
    :addsub_expr{$$=$1;}
    |relation_expr LARGE addsub_expr{
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_L;
        node->addChild($1);
        node->addChild($3);
        $$=node; 
    }
    |relation_expr LEQ addsub_expr{
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_LEQ;
        node->addChild($1);
        node->addChild($3);
        $$=node; 
    }
    |relation_expr SMALL addsub_expr{
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_S;
        node->addChild($1);
        node->addChild($3);
        $$=node; 
    }
    |relation_expr SEQ addsub_expr{
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_SEQ;
        node->addChild($1);
        node->addChild($3);
        $$=node; 
    }
    ;
eq_expr
    :relation_expr{$$=$1;}
    |eq_expr EQUAL relation_expr{
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_EQ;
        node->addChild($1);
        node->addChild($3);
        $$=node; 
    }
    |eq_expr NEQ relation_expr{
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_NEQ;
        node->addChild($1);
        node->addChild($3);
        $$=node; 
    }
    ;
and_expr
    :eq_expr{$$=$1;}
    |and_expr AND eq_expr{
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_AND;
        node->addChild($1);
        node->addChild($3);
        $$=node; 
    }
    ;
logic_expr
    :and_expr{$$=$1;}
    |logic_expr OR and_expr{
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_OR;
        node->addChild($1);
        node->addChild($3);
        $$=node; 
    }
    ;
assign_expr
    :logic_expr{$$=$1;}
    |assign_expr ASSIGN logic_expr{
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_ASSIGN;
        node->addChild($1);
        node->addChild($3);
        $$=node; 
    }
    |assign_expr PLUS logic_expr{
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_PASSIGN;
        node->addChild($1);
        node->addChild($3);
        $$=node; 
    }
    |assign_expr MINUS logic_expr{
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_SASSIGN;
        node->addChild($1);
        node->addChild($3);
        $$=node; 
    }
    ;
expr
    :assign_expr{$$=$1;}
    |expr STARY assign_expr{
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_ASSIGN;
        node->addChild($1);
        node->addChild($3);
        $$=node; 
    }
    ;
type
    : INT {
        TreeNode *node=new TreeNode(lineno,NODE_TYPE);
        node->type=TYPE_INT;
        $$=node; 
    }
    | CHAR {
        TreeNode *node=new TreeNode(lineno,NODE_TYPE);
        node->type=TYPE_CHAR;
        $$=node; 
    }
    | STRING {
        TreeNode *node=new TreeNode(lineno,NODE_TYPE);
        node->type=TYPE_STRING;
        $$=node; 
    }
    | VOID {
        TreeNode *node=new TreeNode(lineno,NODE_TYPE);
        node->type=TYPE_VOID;
        $$=node;         
    }
    ;
const
:INTEGER{$$=$1;}
|CHARVALUE{$$=$1;}
|STRING{$$=$1;}
;
ASSIGNOP:ASSIGN|MINUS|PLUS;
%%

int yyerror(char const* message)
{
  cout << message << " at line " << lineno << endl;
  return -1;
}
