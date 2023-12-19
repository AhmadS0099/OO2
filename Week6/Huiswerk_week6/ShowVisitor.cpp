#include "ShowVisitor.h"
#include "Resistor.h"
#include "Inductor.h"
#include "Capacitor.h"
#include <iostream>
void ShowVisitor::visit(Capacitor& c)
{
    std::cout << "capacitor" << std::endl;
    std::cout << " value " << c.getValue() << std::endl;
    std::cout << " electrolitic " << c.isElectrolitic() << std::endl;
}

void ShowVisitor::visit(Inductor& c)
{
    std::cout << "inductor" << std::endl;
    std::cout << " value " << c.getValue() << std::endl;
    std::cout << " saturable " << c.isSaturable() << std::endl;
}

void ShowVisitor::visit(Resistor& c)
{
    std::cout << "resistor" << std::endl;
    std::cout << " value " << c.getValue() << std::endl;
    std::cout << " tolerance " << c.getTolerance() << std::endl;
}

