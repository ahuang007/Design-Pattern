
#include "Adapter.h"
#include <iostream>
using namespace std;

int main(){
	Adapter* adt = new Adapter();
	adt->Request();

	Target* tar = new Adapter();
	tar->Request();
}