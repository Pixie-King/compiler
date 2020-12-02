#include "tree.h"
int i = 0;
void TreeNode::addChild(TreeNode* child) {
    if(this->child == nullptr)this->child = child;
    else this->child->addSibling(child);
}

void TreeNode::addSibling(TreeNode* sibling){
    if(this->sibling == nullptr){
        this->sibling = sibling;
    }
    else this->sibling->addSibling(sibling);
}

TreeNode::TreeNode(int lineno, NodeType type) {
    this->lineno = lineno;
    this->nodeType = type;
}

void TreeNode::genNodeId() {
    this->nodeID = i++;
    if(this->child != nullptr)this->child->genNodeId();
    if(this->sibling != nullptr)this->sibling->genNodeId();
}

void TreeNode::printNodeInfo() {
    cout<<"lno@"<<this->lineno<<" @"<<this->nodeID
    <<" "<<this->nodeType2String(this->nodeType);
    if (this->nodeType == NODE_CONST || this->nodeType == NODE_TYPE)cout<<" type:"<<this->type->getTypeInfo();
    if (this->nodeType == NODE_CONST){
        if(this->type->type == VALUE_INT) cout<<" value:"<<this->int_val;
        if(this->type->type == VALUE_CHAR) cout<<" value:"<<this->ch_val;
        if(this->type->type == VALUE_BOOL) cout<<" value:"<<this->b_val;
        if(this->type->type == VALUE_STRING) cout<<" value:"<<this->str_val;
    }
    if (this->nodeType == NODE_VAR)cout<<" varname:"<<this->var_name;
    if(this->nodeType == NODE_EXPR)cout<<" OP:"<<this->opType2String(this->optype);
    this->printChildrenId();
    if(this->nodeType == NODE_STMT)cout<<" stmt:"<<this->sType2String(this->stype);
    
    cout<<endl;
}

void TreeNode::printChildrenId() {
    if(this->child == nullptr)return;
    TreeNode* current = this->child;
    cout<<"   children:[";
    while(current != nullptr){
        cout<<"@"<<current->nodeID<<" ";
        current = current->sibling;
    }
    cout<<"]";
}

void TreeNode::printAST() {
    this->printNodeInfo();
    if(this->child!=nullptr)this->child->printAST();
    if(this->sibling!=nullptr)this->sibling->printAST();
}


// You can output more info...
void TreeNode::printSpecialInfo() {
    switch(this->nodeType){
        case NODE_CONST:
            break;
        case NODE_VAR:
            break;
        case NODE_EXPR:
            break;
        case NODE_STMT:
            break;
        case NODE_TYPE:
            break;
        default:
            break;
    }
}
string TreeNode::sType2String(StmtType type) {
    switch (type)
    {
    case STMT_SKIP:
        return "skip";
        break;
    case STMT_DECL:
        return "decl";
        break;
    case STMT_ASSIGN:
        return "assign";
        break;
    case STMT_SEQ:
        return "seq";
        break;
    case STMT_IF_ELSE:
        return "if_else";
        break;
    
    case STMT_WHILE:
        return "while";
        break;
    case STMT_FOR:
        return "for";
        break;
    case STMT_PRINTF:
        return "printf";
        break;
    case STMT_SCANF:
        return "scanf";
        break;
    default:
        break;
    }
    return "";
}
string TreeNode::nodeType2String (NodeType type){
    switch (type)
    {
    case NODE_CONST:
        return "const";
        break;
    case NODE_VAR:
        return "var";
        break;
    case NODE_BOOL:
        return "bool";
        break;
    case NODE_OP:
        return "op";
        break;
    case NODE_EXPR:
        return "expression";
        break;
    case NODE_TYPE:
        return "type";
        break;
    case NODE_STMT:
        return "statement";
        break;
    case NODE_PROG:
        return "program";
        break;
    case NODE_FUNC:
        return "function";
        break;
     case NODE_BLOCK:
        return "block";
        break;
    default:
        break;
    }
    return "";
}
string TreeNode::opType2String(OperatorType type) {
    switch (type)
    {
    case OP_ADD:
        return "+";
        break;
    case OP_SUB:
        return "-";
        break;
    case OP_MUL:
        return "*";
        break;
    case OP_DEV:
        return "/";
        break;
    case OP_MOD:
        return "%";
        break;
    case OP_AND:
        return "&&";
        break;
    case OP_OR:
        return "||";
        break;
    case OP_NOT:
        return "!";
        break;
    case OP_L:
        return ">";
        break;
    case OP_LEQ:
        return ">=";
        break;
    case OP_S:
        return "<";
        break;
    case OP_SEQ:
        return "<=";
        break;
    case OP_EQ:
        return "==";
        break;
    case OP_NEQ:
        return "!=";
        break;
    case OP_ASSIGN:
        return "=";
        break;
    case OP_PASSIGN:
        return "+=";
        break;
    case OP_SASSIGN:
        return "-=";
        break;
    case OP_2ADD:
        return "++";
        break;
    case OP_2SUB:
        return "--";
        break;
    default:
        break;
    }
    return "";
}