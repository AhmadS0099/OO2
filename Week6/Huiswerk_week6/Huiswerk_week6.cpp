#include "Circuit.h"
#include "Resistor.h"
#include "Capacitor.h"
#include "Inductor.h"
#include <iostream>

int main()
{
    // Create a circuit
    Circuit circuit;

    // Create some components
    Resistor resistor(50, 0.05);
    Capacitor capacitor(5.0e-6, false);
    Inductor inductor(1.0e-6, true);

    // Add components to the circuit
    circuit.add(&resistor);
    circuit.add(&capacitor);
    circuit.add(&inductor);

    // Iterate through the components in the circuit
    for (IComponent* component : circuit)
    {
        Resistor* r = dynamic_cast<Resistor*>(component);
        Capacitor* c = dynamic_cast<Capacitor*>(component);
        Inductor* i = dynamic_cast<Inductor*>(component);

        if (r != nullptr)
        {
            std::cout << "resistor" << std::endl;
            std::cout << " value " << r->getValue() << std::endl;
            std::cout << " tolerance " << r->getTolerance() << std::endl;
        }
        else if (c != nullptr)
        {
            std::cout << "capacitor" << std::endl;
            std::cout << " value " << c->getValue() << std::endl;
            std::cout << " electrolitic " << (c->isElectrolitic() ? "yes" : "no") << std::endl;
        }
        else if (i != nullptr)
        {
            std::cout << "inductor" << std::endl;
            std::cout << " value " << i->getValue() << std::endl;
            std::cout << " saturable " << (i->isSaturable() ? "yes" : "no") << std::endl;
        }
    }

    return 0;
}
