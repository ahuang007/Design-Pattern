
#include "Memento.h"
#include <iostream>
using namespace std;

int main(){
	Originator* o = new Originator();
	o->SetState("old"); // 备忘前状态
	o->PrintState();

	Memento* m = o->CreateMemento(); //将状态备忘
	o->SetState("new");
	o->PrintState();
	o->RestorToMemento(m);
	o->PrintState();

	return 0;
}