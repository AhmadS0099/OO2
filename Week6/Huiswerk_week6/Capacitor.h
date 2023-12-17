// Capacitor.h
#pragma once
#include "IComponent.h"

class Capacitor : public IComponent
{
public:
    Capacitor(double value, bool electrolitic);

    double getValue() override;
    bool isElectrolitic();
    void accept(Visitor& visitor) override;

private:
    double capacity;
    bool electrolitic;
};
