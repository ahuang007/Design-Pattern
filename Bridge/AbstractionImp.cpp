
#include "AbstractionImp.h"
#include <iostream>
using namespace std;

AbstractionImp::AbstractionImp(){

}

AbstractionImp::~AbstractionImp(){

}

void AbstractionImp::Operation(){
	cout << "AbstractionImp...Operation..." << endl;
}

ConcreteAbstractionImpA::ConcreteAbstractionImpA(){

}

ConcreteAbstractionImpA::~ConcreteAbstractionImpA(){

}

void ConcreteAbstractionImpA::Operation(){
	cout << "ConcreteAbstractionImpA...Operation..." << endl;
}

ConcreteAbstractionImpB::ConcreteAbstractionImpB(){

}

ConcreteAbstractionImpB::~ConcreteAbstractionImpB(){

}

void ConcreteAbstractionImpB::Operation(){
	cout << "ConcreteAbstractionImpB...Operation..." << endl;
}