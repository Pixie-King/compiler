%option nounput
%{
#include "common.h"
#include "main.tab.h"  // yacc header
int lineno=1;
%}
BLOCKCOMMENT \/\*([^\*^\/]*|[\*^\/*]*|[^\**\/]*)*\*\/
LINECOMMENT \/\/[^\n]*
EOL	(\r\n|\r|\n)
WHILTESPACE [[:blank:]]+

INTEGER [0-9]+
CHARVALUE  \'.?\'
STRING \".+\"
IDENTIFIER [[:alpha:]_][[:alpha:][:digit:]_]*
%%
 
{BLOCKCOMMENT}  /* do nothing */
{LINECOMMENT}  /* do nothing */

"true" {
    TreeNode *node = new TreeNode(lineno,NODE_BOOL);
    node->b_val = true;
    yylval = node;
    return TRUE;
}
"false" {
    TreeNode *node = new TreeNode(lineno,NODE_BOOL);
    node->b_val = false;
    yylval = node;
    return FALSE;
}

"int" return INT;
"bool" return BOOL;
"char" return CHAR;
"void" return VOID;

"if" return IF;
"while" return WHILE;
"else" return ELSE;
"for" return FOR;

"printf" return PRINTF;
"scanf" return SCANF;

"=" return ASSIGN;
"+=" return PLUS;
"-=" return MINUS;

"+" return ADD;
"-" return SUB;
"*" return MUL;
"/" return DEV;
"%" return MOD;
"++" return TADD;
"--" return TSUB;
"&" return GETV;

"!" return NOT;
"==" return EQUAL;
">" return LARGE;
">=" return LEQ;
"<" return SMALL;
"<=" return SEQ;
"!=" return NEQ;

"&&" return AND;
"\|\|" return OR;
"," return STARY;
";" return SEMICOLON;
"(" return LPAREN;
")" return RPAREN;
"{" return LBRACE;
"}" return RBRACE;

{INTEGER} {
    TreeNode* node = new TreeNode(lineno, NODE_CONST);
    node->type = TYPE_INT;
    node->int_val = atoi(yytext);
    yylval = node;
    return INTEGER;
}

{CHARVALUE} {
    TreeNode* node = new TreeNode(lineno, NODE_CONST);
    node->type = TYPE_CHAR;
    node->ch_val = yytext[1];
    yylval = node;
    return CHARVALUE;
}

{STRING} {
    TreeNode* node = new TreeNode(lineno, NODE_CONST);
    node->type = TYPE_STRING;
    node->str_val = yytext;
    yylval = node;
    return STRING;
}

{IDENTIFIER} {
    TreeNode* node = new TreeNode(lineno, NODE_VAR);
    node->var_name = string(yytext);
    yylval = node;
    return IDENTIFIER;
}

{WHILTESPACE} /* do nothing */

{EOL} lineno++;

. {
    cerr << "[line "<< lineno <<" ] unknown character:" << yytext << endl;
}
%%