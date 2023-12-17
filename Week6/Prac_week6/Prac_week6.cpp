#include <algorithm> // for the method for_each
#include <array> // for std::array
#include <functional> // for std::function
#include <iostream> // for std::cout en std::endl
#include "Opteller.h"
#include "ActionInterface.h"
#include "Actions.h"

int main()
{
	ActionInterface* paAction[3];
	paAction[0] = new Action1();
	paAction[1] = new Action2();
	paAction[2] = new Action3();
	for (int n = 0; n < 3; n++)
	{
		paAction[n]->action();
		delete paAction[n];
	}
	std::cin.get();
	return 0;
}
