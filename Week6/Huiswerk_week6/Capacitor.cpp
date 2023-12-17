// Capacitor.cpp
#include "Capacitor.h"
#include "Visitor.h"

Capacitor::Capacitor(double value, bool electrolitic) : capacity(value), electrolitic(electrolitic) {}

double Capacitor::getValue()
{
    return capacity;
}

bool Capacitor::isElectrolitic()
{
    return electrolitic;
}

void Capacitor::accept(Visitor& visitor)
{
    visitor.visit(*this);
}
