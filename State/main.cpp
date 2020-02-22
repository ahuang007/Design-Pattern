
#include "Context.h"
#include "State.h"
#include <iostream>
using namespace std; 

int main(){
	State* st = new ConcreteStateA();
	Context* con = new Context(st);
	con->OperationChangeState();
	con->OperationChangeState();
	con->OperationChangeState();
	
	if (con != NULL)
		delete con;

	if (st != NULL)
		st = NULL;

	return 0;
}