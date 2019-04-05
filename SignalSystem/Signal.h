#ifndef _SIGNAL_
#define _SIGNAL_
#include <iostream>
#define IMPACT 0
#define BURN 1
#define POISON 2

class Object
{
public:
	int sendSignal(int Signal)
	{
		return Signal;
	};
	virtual void receiveSignal(int Signal) = 0;
};

class Player: public Object
{
public:
	void receiveSignal(int Signal)
	{
		switch(Signal)
		{
		case IMPACT: std::cout << "Player is hit" << std::endl;
			break;
		case BURN: std::cout << "Player is burned" << std::endl;
			break;
		case POISON: std::cout << "Player is poisoned" << std::endl;
			break;
		}
	}
};

class Enemy: public Object
{
public:
	void receiveSignal(int Signal)
	{
		switch(Signal)
		{
		case IMPACT: std::cout << "Enemy is hit" << std::endl;
			break;
		case BURN: std::cout << "Enemy is burned" << std::endl;
			break;
		case POISON: std::cout << "Enemy is poisoned" << std::endl;
			break;
		}
	}	
};

#endif