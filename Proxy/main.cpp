
#include "Proxy.h"
#include <iostream>
using namespace std;

int main(){
	Subject* sub = new ConcreteSubject();
	Proxy* p = new Proxy(sub);
	p->Request();

	return 0;
}