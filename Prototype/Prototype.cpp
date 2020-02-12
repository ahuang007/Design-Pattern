
#include "Prototype.h"
#include <iostream>
using namespace std;

Prototype::Prototype(){

}

Prototype::~Prototype(){

}

Prototype* Prototype::Clone() const{
	//cout << "Prototype Clone ..." << endl;
	return 0;
}


ConcretePrototype::ConcretePrototype(){
	cout << "ConcretePrototype ..." << endl;
}

ConcretePrototype::~ConcretePrototype(){

}

ConcretePrototype::ConcretePrototype(const ConcretePrototype* cp){
	cout << "ConcretePrototype copy ..." << endl;
	
}

Prototype* ConcretePrototype::Clone() const{
	//cout << "ConcretePrototype Clone ..." << endl;
	return new ConcretePrototype(this);
}