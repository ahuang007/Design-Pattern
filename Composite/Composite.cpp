
#include "Component.h"
#include "Composite.h"

#define NULL 0

Composite::Composite(){

}

Composite::~Composite(){

}

void Composite::Operation(){
	vector<Component*>::iterator comIter = comVec.begin();
	for (; comIter != comVec.end(); comIter++){
		(*comIter)->Operation();
	}
}

void Composite::Add(Component* com){
	comVec.push_back(com);
}

void Composite::Remove(Component* com){
	for (auto iter = comVec.begin(); iter != comVec.end(); iter++){
		if (*iter == com){
			comVec.erase(iter);
			break;
		}
	}
}

Component* Composite::GetChild(int index){
	if (index >= comVec.size()) 
		return NULL;
	return comVec[index];
}