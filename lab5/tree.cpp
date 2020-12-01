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
    default:
        break;
    }
    return "";
}