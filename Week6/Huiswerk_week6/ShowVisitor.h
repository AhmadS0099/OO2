#pragma once
#include "Visitor.h"

class ShowVisitor : public Visitor
{
public:
	ShowVisitor(){}
	virtual ~ShowVisitor(){}

	void visit(Capacitor& c) override;
	void visit(Inductor& c) override;
	void visit(Resistor& c) override;
};

