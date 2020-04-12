
#ifndef _COMMAND_H_
#define _COMMAND_H_

class Reciever;

class Command{
public:
	virtual  ~Command();
	virtual void Excute() = 0;
protected:
	Command();
};

class ConcreteCommand :public Command{
public:
	ConcreteCommand(Reciever* rev);
	~ConcreteCommand();
	void Excute();
private:
	Reciever* _rev;

};

#endif //_COMMAND_H_