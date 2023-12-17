// Inductor.cpp
#include "Inductor.h"
#include "Visitor.h"

Inductor::Inductor(double value, bool saturable) : inductance(value), saturable(saturable) {}

double Inductor::getValue()
{
    return inductance;
}

bool Inductor::isSaturable()
{
    return saturable;
}

void Inductor::accept(Visitor& visitor)
{
    visitor.visit(*this);
}
