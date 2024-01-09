#pragma once

#include "Accu.h"
#include <string>

class ChargingStation; // Forward declaration

class EV
{
public:
    EV(const std::string& type, double accucapaciteit, double verbruik, const std::string& bestemming);
    virtual ~EV();

    void rijden();
    void laden();
    void ladenComplete();


    double getSoC() const;  
    std::string getType() const;
    std::string getBestemming() const;

private:
    Accu* accu;
    std::string type;
    double accucapaciteit;
    double verbruik;
    std::string bestemming;
};
