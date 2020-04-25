
#include "Element.h"
#include "Visitor.h"
#include <iostream>
using namespace std;

int main(){

	Visitor* visA = new ConcreteVisitorA();
	Element* elmA = new ConcreteElementA();
	elmA->Accept(visA);
	
	Visitor* visB = new ConcreteVisitorB();
	Element* elmB = new ConcreteElementB();
	elmB->Accept(visB);
	
	return 0;
}