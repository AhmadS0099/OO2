#include "EV.h"
#include "ChargingStation.h"
#include <iostream>
#include <thread>
#include <vector>
#include <random>

int main()
{
    const int totalVehiclesOnRoad = 4321; // Total number of vehicles on the road

    // Get the percentage of electric vehicles from the user
    double percentageEVs;
    std::cout << "Enter the percentage of electric vehicles: ";
    std::cin >> percentageEVs;

    const int numCarsTesla = static_cast<int>(totalVehiclesOnRoad * (percentageEVs / 100.0) * 0.45545);
    const int numCarsKia = static_cast<int>(totalVehiclesOnRoad * (percentageEVs / 100.0) * 0.23105);
    const int numCarsVolkswagen = static_cast<int>(totalVehiclesOnRoad * (percentageEVs / 100.0) * 0.19950);

    // Create electric cars based on the distribution
    std::vector<EV> electricCars;
    electricCars.reserve(numCarsTesla + numCarsKia + numCarsVolkswagen);

    for (int i = 0; i < numCarsTesla; ++i) {
        electricCars.emplace_back("Tesla Model 3", 60, 142, "B");
    }

    for (int i = 0; i < numCarsKia; ++i) {
        electricCars.emplace_back("Kia Niro", 68, 168, "U");
    }

    for (int i = 0; i < numCarsVolkswagen; ++i) {
        electricCars.emplace_back("Volkswagen ID.3", 62, 166, "B");
    }

    // Create charging stations
    ChargingStation lingehorst("Lingehorst", 10);
    ChargingStation bisde("Bisde", 12);

    // Simulate driving and charging for each electric car
    std::vector<std::thread> threads;
    threads.reserve(electricCars.size());

    std::cout << "\nSimulating electric cars on the road...\n";

    for (auto& car : electricCars) {
        std::cout << "\nAuto type " << car.getType() << " started driving.\n";
        threads.emplace_back(&EV::rijden, &car);

        if (car.getSoC() < 20.0) {
            // Choose the charging station based on the destination
            ChargingStation& chargingStation = (car.getBestemming() == "U") ? bisde : lingehorst;
            
            std::cout << "Auto type " << car.getType() << " is checking the state of charge.\n";
            
            threads.emplace_back(&ChargingStation::laadAutoOp, &chargingStation, &car);
        }
    }

    // Join all threads
    for (auto& thread : threads) {
        if (thread.joinable()) {
            thread.join();
        }
    }

    // Print the final state of charge after driving and charging
    std::cout << "\nFinal State of Charge (SoC) for Electric Vehicles:\n";
    for (const auto& car : electricCars) {
        std::cout << "Auto type " << car.getType() << ": " << car.getSoC() << "%" << std::endl;
    }

    return 0;
}
