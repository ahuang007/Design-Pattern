
#include "FlyweightFactory.h"
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

FlyweightFactory::FlyweightFactory(){

}

FlyweightFactory::~FlyweightFactory(){

}

Flyweight* FlyweightFactory::GetFlyweight(const string& key){
	auto it = _fly.begin();
	for (; it != _fly.end(); it++){
		if ((*it)->GetIntrinsicState() == key){
			cout << "already created by users..." << endl;
			return *it;
		}
	}

	Flyweight* fw = new ConcreteFlyweight(key);
	_fly.push_back(fw);
	return fw;
}