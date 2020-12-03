#ifndef IDTABLE_H
#define IDTABLE_H

#include "pch.h"
#include "type.h"

class IDinfo
{
public:
    string name;
    Type* type;
    string value;
    string effect;
    IDinfo();
    IDinfo(string name,Type* type,string value = "not initialization"){
        this->name = name;
        this->type = type;
        this->value = value;
    }
    void IDvalue(string value){
        this->value = value;
    }
    void print(){
        cout<<"name:"<<name<<" type:"<<type->getTypeInfo()<<" value:"<<value<<endl;
    }
};

class IdTable
{
    std::map<std::string,stack<IDinfo*>*> SignTable;
    std::map<std::string,stack<IDinfo*>*>::iterator iter;
public:
    IdTable();
    void addID(IDinfo* id);
    void printIDTable(); 
    void changeValue(string,string);
};

#endif
