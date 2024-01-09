#pragma once


#include <string>
#include "EV.h"


class ChargingStation
{
public:
    ChargingStation(const std::string& naam, double afstandTotU);
    ~ChargingStation();

    double getAfstandTotU() const;
    void laadAutoOp(EV* car);

private:
    std::string naam;
    double afstandTotU;
};
