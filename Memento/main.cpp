
#include "Memento.h"
#include <iostream>
using namespace std;

int main(){
	Originator* o = new Originator();
	o->SetState("old"); // ����ǰ״̬
	o->PrintState();

	Memento* m = o->CreateMemento(); //��״̬����
	o->SetState("new");
	o->PrintState();
	o->RestorToMemento(m);
	o->PrintState();

	return 0;
}