
#include "Resistor.h"
#include "Visitor.h"

Resistor::Resistor(double value, double tolerance) : resistance(value), tolerance(tolerance) {}

double Resistor::getValue()
{
    return resistance;
}

double Resistor::getTolerance()
{
    return tolerance;
}

void Resistor::accept(Visitor& visitor)
{
    visitor.visit(*this);
}
