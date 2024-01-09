#include "ChargingStation.h"
#include <thread> // Include thread for std::this_thread::sleep_for
#include <chrono> // Include chrono for std::chrono::minutes



ChargingStation::ChargingStation(const std::string& naam, double afstandTotU)
    : naam(naam), afstandTotU(afstandTotU) {}

ChargingStation::~ChargingStation() {}

double ChargingStation::getAfstandTotU() const
{
    return afstandTotU;
}

void ChargingStation::laadAutoOp(EV* car)
{
    // Simulate charging for 5 minutes
    // The battery is fully charged after 5 minutes
    std::cout << "Charging at station " << naam << " for 5 minutes." << std::endl;
    std::this_thread::sleep_for(std::chrono::minutes(5));

    // Charging is complete
    std::cout << "Charging at station " << naam << " complete." << std::endl;
}
