#pragma once
#include <iostream>

class Accu
{
public:
    Accu(double soc, double capaciteit) : capaciteit(capaciteit), soc(soc) {}
    virtual ~Accu();

    void laadOp();
    void gebruikEnergie(double energie);

    double getSoC() const;

private:
    double capaciteit;
    double soc;
};
