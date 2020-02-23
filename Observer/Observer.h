
#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include "Subject.h"
#include <string>
using namespace std;

typedef string State;

class Observer{
public:
	virtual ~Observer();
	virtual void Update(Subject* sub) = 0;
	virtual void PrintInfo() = 0;
protected:
	Observer();

protected:
	State _st;
};

class ConcreteObserverA :public Observer{
public:
	virtual Subject* GetSubject();
	ConcreteObserverA(Subject* sub);
	virtual ~ConcreteObserverA();

	// 传入 Subject 作为参数，这样可以让一个 View 属于多个 Subject.
	void Update(Subject* sub);
	void PrintInfo();
private:
	Subject* _sub;
};

class ConcreteObserverB :public Observer{
public:
	virtual Subject* GetSubject();
	ConcreteObserverB(Subject* sub);
	virtual ~ConcreteObserverB();

	// 传入 Subject 作为参数，这样可以让一个 View 属于多个 Subject.
	void Update(Subject* sub);
	void PrintInfo();
private:
	Subject* _sub;
};

#endif //_OBSERVER_H_