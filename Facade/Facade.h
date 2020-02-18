
#ifndef _FACADE_H_
#define _FACADE_H_

class Subsystem1{
public:
	Subsystem1();
	virtual ~Subsystem1();
	void Operation();
};

class Subsystem2{
public:
	Subsystem2();
	virtual ~Subsystem2();
	void Operation();
};

class Facade{
public:
	Facade();
	virtual ~Facade();
	void OperationWrapper();
private:
	Subsystem1* _subs1;
	Subsystem2* _subs2;
};

#endif //_FACADE_H_