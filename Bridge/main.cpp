
#include "Abstraction.h"
#include "AbstractionImp.h"
#include <iostream>
using namespace std;

int main(){
	AbstractionImp* imp1 = new ConcreteAbstractionImpA();
	Abstraction* ab1 = new  RefinedAbstraction(imp1);
	ab1->Operation();

	AbstractionImp* imp2 = new ConcreteAbstractionImpB();
	Abstraction* ab2 = new  RefinedAbstraction(imp2);
	ab2->Operation();

	return 0;
}