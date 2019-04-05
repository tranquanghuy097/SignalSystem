#include "Signal.h"

void main()
{
	Object *object[] = {new Player(), new Enemy()};
	for(int i = 0; i < 2; i++)
		object[i]->receiveSignal(IMPACT);
}