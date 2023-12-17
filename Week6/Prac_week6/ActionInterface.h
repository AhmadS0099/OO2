#pragma once

class ActionInterface
{
public:
	ActionInterface() = default;
	virtual ~ActionInterface() = default;
public:
	virtual void action() = 0;
};