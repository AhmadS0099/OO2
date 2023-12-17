// Inductor.h
#pragma once
#include "IComponent.h"

class Inductor : public IComponent
{
public:
    Inductor(double value, bool saturable);

    double getValue() override;
    bool isSaturable();
    void accept(Visitor& visitor) override;

private:
    double inductance;
    bool saturable;
};
