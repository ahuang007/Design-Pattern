
#ifndef _CONTEXT_H_
#define _CONTEXT_H_

class State;

class Context{
public:
	Context();
	Context(State* state);
	~Context();
	void OperationInterface();
	void OperationChangeState();
private:
	friend class State; //������ State ���п��Է��� Context ��� private ��Ա
	bool ChangeState(State* state);
private:
	State* _state;
};

#endif //_CONTEXT_H_