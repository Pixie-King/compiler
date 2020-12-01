%{
    #include "common.h"
    #define YYSTYPE TreeNode *  
    TreeNode* root;
    extern int lineno;
    int yylex();
    int yyerror( char const * );
%}
%token CHAR INT STRING BOOL VOID

%token IDENTIFIER INTEGER
%token IF ELSE WHILE
%token LPAREN RPAREN LBRACE RBRACE SEMICOLON
%token ADD ASSIGN EQUAL NOT
%token TRUE FALSE
%token PRINTF SCANF

%right NOT
%left ADD
%left EQUAL
%right ASSIGN
%nonassoc LOWER_THEN_ELSE
%nonassoc ELSE 

%%

program
: statements {root = new TreeNode(0, NODE_PROG); root->addChild($1);};

statements
:  statement {$$=$1;}
|  statements statement {$$=$1; $$->addSibling($2);}
;

statement
: instruction {$$=$1;}
| if_else {$$=$1;}
| while{$$=$1;}
| LBRACE statements RBRACE {$$=$2;}
;

if_else
    : IF bool_statment statement %prec LOWER_THEN_ELSE {
        TreeNode *node=new TreeNode($2->lineno,NODE_STMT);
        node->stype=STMT_IF_ELSE;
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
    | IF bool_statment statement ELSE statement {
        TreeNode *node=new TreeNode($2->lineno,NODE_STMT);
        node->stype=STMT_IF_ELSE;
        node->addChild($2);
        node->addChild($3);
        node->addChild($5);
        $$=node;
    }
    ;
while
    : WHILE bool_statment statement {
        TreeNode *node=new TreeNode($2->lineno,NODE_STMT);
        node->stype=STMT_WHILE;
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
    ;
bool_statment
    : LPAREN bool_expr RPAREN {$$=$2;}
    ;
instruction
    : type IDENTIFIER ASSIGN expr SEMICOLON {
        TreeNode *node=new TreeNode($1->lineno,NODE_STMT);
        node->stype=STMT_DECL;
        node->addChild($1);
        node->addChild($2);
        node->addChild($4);
        $$=node;
    }
    | IDENTIFIER ASSIGN expr SEMICOLON {
        TreeNode *node=new TreeNode($1->lineno,NODE_STMT);
        node->stype=STMT_ASSIGN;
        node->addChild($1);
        node->addChild($3);
        $$=node;  
    }
    | printf SEMICOLON {$$=$1;}
    | scanf SEMICOLON {$$=$1;}
    ;
printf
    : PRINTF LPAREN expr RPAREN {
        TreeNode *node=new TreeNode($3->lineno,NODE_STMT);
        node->stype=STMT_PRINTF;
        node->addChild($3);
        $$=node;
    }
    ;
scanf
    : SCANF LPAREN expr RPAREN {
        TreeNode *node=new TreeNode($3->lineno,NODE_STMT);
        node->stype=STMT_SCANF;
        node->addChild($3);
        $$=node;
    }
    ;
bool_expr
    : TRUE {$$=$1;}
    | FALSE {$$=$1;}
    | expr EQUAL expr {
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_EQ;
        node->addChild($1);
        node->addChild($3);
        $$=node;
    }
    | NOT bool_expr {
        TreeNode *node=new TreeNode($2->lineno,NODE_EXPR);
        node->optype=OP_NOT;
        node->addChild($2);
        $$=node;        
    }
    ;
expr
    : IDENTIFIER {$$=$1;}
    | INTEGER {$$=$1;}
    | expr ADD expr {
        TreeNode *node=new TreeNode($1->lineno,NODE_EXPR);
        node->optype=OP_ADD;
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
    | VOID {
        TreeNode *node=new TreeNode(lineno,NODE_TYPE);
        node->type=TYPE_VOID;
        $$=node;         
    }
    ;

%%

int yyerror(char const* message)
{
  cout << message << " at line " << lineno << endl;
  return -1;
}
