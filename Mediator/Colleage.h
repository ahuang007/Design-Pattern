
#ifndef _COLLEAG_H_
#define _COLLEAG_H_

#include<string>
using namespace std;

class Mediator;

class Colleage{
public:
	virtual ~Colleage();
	virtual void Action() = 0;
	virtual void SetState(const string& sdt) = 0;
	virtual string GetState() = 0;
protected:
	Colleage();
	Colleage(Mediator* mdt);

	Mediator* _mdt;
};

class ConcreteColleageA : public Colleage{
public:
	ConcreteColleageA();
	ConcreteColleageA(Mediator* mdt);
	~ConcreteColleageA();
	void Action();
	void SetState(const string& sdt);
	string GetState();

private:
	string _sdt;
};

class ConcreteColleageB : public Colleage{
public:
	ConcreteColleageB();
	ConcreteColleageB(Mediator* mdt);
	~ConcreteColleageB();
	void Action();
	void SetState(const string& sdt);
	string GetState();

private:
	string _sdt;
};


#endif //_COLLEAG_H_