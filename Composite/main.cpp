
#include "Component.h"
#include "Composite.h"
#include "leaf.h"
#include <iostream>
using namespace std;

int main(){
	Leaf* l = new Leaf();
	l->Operation();

	Composite* com = new Composite();
	com->Add(l);
	com->Operation();
	
	Component* ll = com->GetChild(0);
	ll->Operation();

	return 0;
}