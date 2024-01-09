#include "EV.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <random>

EV::EV(const std::string& type, double accucapaciteit, double verbruik, const std::string& bestemming)
    : accu(nullptr), type(type), accucapaciteit(accucapaciteit), verbruik(verbruik), bestemming(bestemming)
{
    // Generate a random SoC between 10 and 100
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(10, 100);
    int random_soc = dis(gen);

    // Create a new accu with the generated SoC and the given accucapaciteit
    accu = new Accu(random_soc, accucapaciteit);
}


EV::~EV()
{
    delete accu;
}
double EV::getSoC() const
{
    // Hier zou je de SoC van de accu moeten teruggeven
    // Je kunt hiervoor de functie van de accu gebruiken
    if (accu != nullptr)
    {
        return accu->getSoC();
    }
    else
    {
        // Geef een standaardwaarde terug als er geen accu is
        return 0.0;
    }
}

std::string EV::getType() const
{
    return type;
}

std::string EV::getBestemming() const
{
    return bestemming;
}

void EV::rijden()
{
    // Simuleer het rijden en verbruik van energie
    double afstand = 50.0;  // Simuleer een afstand van 50 km
    double energieverbruik = afstand * verbruik;
    accu->gebruikEnergie(energieverbruik);

    std::cout << "Auto type " << type << " heeft gereden naar bestemming " << bestemming << std::endl;
}

void EV::laden()
{
    // Simuleer het laden van de accu
   accu->laadOp();

    std::cout << "Accu van auto type " << type << " is opgeladen." << std::endl;

}

void EV::ladenComplete()
{
    std::cout << "Charging complete for car type " << type << "." << std::endl;
}
