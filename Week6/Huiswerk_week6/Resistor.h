
#pragma once
#include "IComponent.h"

class Resistor : public IComponent
{
public:
    Resistor(double value, double tolerance);

    double getValue() override;
    double getTolerance();
    void accept(Visitor& visitor) override;

private:
    double resistance;
    double tolerance;
};
