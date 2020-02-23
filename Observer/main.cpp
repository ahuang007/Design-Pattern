

#include "Subject.h"
#include "Observer.h"
#include <iostream>
using namespace std;

int main(){
	ConcreteSubject* sub = new ConcreteSubject();
	Observer* ob1 = new ConcreteObserverA(sub);
	Observer* ob2 = new ConcreteObserverB(sub);
	sub->SetState("old");
	sub->Notify();
	sub->SetState("new");
	sub->Notify();
	return 0;
}