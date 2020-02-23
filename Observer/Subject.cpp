
#include "Subject.h"
#include "Observer.h"
#include <iostream>
#include <list>
using namespace std;

Subject::Subject(){
	// ��ģ���ʹ��֮ǰһ��Ҫ new������
	_obvs = new list<Observer*>;
}

Subject::~Subject(){
	delete _obvs;
}

void Subject::Attach(Observer* obv){
	_obvs->push_front(obv);
}

void Subject::Detach(Observer* obv){
	if (obv != NULL)
		_obvs->remove(obv);
}

void Subject::Notify(){
	auto it = _obvs->begin();
	for (; it != _obvs->end(); it++){
		(*it)->Update(this);
	}
}

ConcreteSubject::ConcreteSubject(){
	_st = "";
}

ConcreteSubject::~ConcreteSubject(){
}

State ConcreteSubject::GetState(){
	return _st;
}

void ConcreteSubject::SetState(const State& st){
	_st = st;
}