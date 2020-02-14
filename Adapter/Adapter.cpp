
#include "Adapter.h"
#include <iostream>
using namespace std;

Target::Target(){

}

Target::~Target(){

}

void Target::Request(){
	cout << "Target::Request" << endl;
}

Adaptee::Adaptee(){

}

Adaptee::~Adaptee(){

}

void Adaptee::SpecialRequest(){
	cout << "Adaptee::SpecialRequest" << endl;
}

Adapter::Adapter(){

}

Adapter::~Adapter(){

}

void Adapter::Request(){
	this->SpecialRequest();
}