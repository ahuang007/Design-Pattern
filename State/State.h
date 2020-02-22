
#ifndef _STATE_H_
#define _STATE_H_

class Context; // Ç°ÖÃ ÉùÃ÷

class State{
public:
	State();
	virtual ~State();
	virtual void OperationInterface(Context*) = 0;
	virtual void OperationChangeState(Context*) = 0;
protected:
	bool ChangeState(Context* con, State* st);
};

class ConcreteStateA :public State{
public:
	ConcreteStateA();
	virtual ~ConcreteStateA();
	virtual void OperationChangeState(Context*);
	virtual void OperationInterface(Context*);
};

class ConcreteStateB :public State{
public:
	ConcreteStateB();
	virtual ~ConcreteStateB();
	virtual void OperationChangeState(Context*);
	virtual void OperationInterface(Context*);
};

#endif //_STATE_H_