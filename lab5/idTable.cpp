#include "idTable.h"

IdTable::IdTable() {
}

void IdTable::addID(IDinfo* id){
    if(SignTable.count(id->name) == 0){
        stack <IDinfo*>* temp = new stack<IDinfo*>;
        temp->push(id);
        SignTable.insert(std::pair<string,stack<IDinfo*>*>(id->name,temp));
    }
    else{
        SignTable[id->name]->push(id);
    }
}

void IdTable::changeValue(string name,string value){
    if(SignTable.count(name) != 0)
        SignTable[name]->top()->IDvalue(value);
}

void IdTable::printIDTable(){
    for (iter=SignTable.begin(); iter!=SignTable.end(); iter++)
    {
        while  (!iter->second->empty()){
            iter->second->top()->print();
            iter->second->pop();
        }
    }
}