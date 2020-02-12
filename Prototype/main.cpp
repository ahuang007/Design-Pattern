
#include "Prototype.h"
#include <iostream>
using namespace std;

int main(){
	Prototype* p = new ConcretePrototype();
	Prototype* p1 = p->Clone();
	Prototype* p2 = p->Clone();
	return 0;
}