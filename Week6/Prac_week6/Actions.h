#pragma once
#include <iostream>
#include "ActionInterface.h"

class Action1 : public ActionInterface
{
public:
	//Actions1() {}
	//virtual ~Actions1() {}

public:
	void action() override { (std::cout << "1" << std::endl); }

};

class Action2 : public ActionInterface
{
public:
	//Actions1() {}
	//virtual ~Actions1() {}

public:
	void action() override { (std::cout << "2" << std::endl); }

};
class Action3 : public ActionInterface
{
public:
	//Actions1() {}
	//virtual ~Actions1() {}

public:
	void action() override { (std::cout << "3" << std::endl); }

};

