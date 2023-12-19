#include "Circuit.h"
#include "Resistor.h"
#include "Capacitor.h"
#include "Inductor.h"
#include <iostream>
#include "Visitor.h"
#include "ShowVisitor.h"


int main()
{
	Circuit circuit;
	ShowVisitor visitor;

	circuit.add(new Resistor(50, 0.05));
	circuit.add(new Capacitor(5.0e-6, false));
	circuit.add(new Inductor(1.0e-6, true));

	for (IComponent* component : circuit)
		component->accept(visitor);

	return 0;
}
