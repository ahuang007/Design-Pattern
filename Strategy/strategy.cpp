
#include "strategy.h"
#include <iostream>
using namespace std;

Strategy::Strategy(){

}

Strategy::~Strategy(){
	cout << "~Strategy..." << endl;
}

void Strategy::AlgrithmInterface(){

}

ConcreteStrategyA::ConcreteStrategyA(){

}

ConcreteStrategyA::~ConcreteStrategyA(){
	cout << "~ConcreteStrategyA..." << endl;
}

void ConcreteStrategyA::AlgrithmInterface(){
	cout << "ConcreteStrategyA::AlgrithmInterface ..." << endl;
}

ConcreteStrategyB::ConcreteStrategyB(){

}

ConcreteStrategyB::~ConcreteStrategyB(){
	cout << "~ConcreteStrategyB..." << endl;
}

void ConcreteStrategyB::AlgrithmInterface(){
	cout << "ConcreteStrategyB::AlgrithmInterface ..." << endl;
}