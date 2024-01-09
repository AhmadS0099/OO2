#include "Accu.h"



Accu::~Accu() {}

void Accu::laadOp()
{
    // Simuleer het opladen van de accu
    // Hier kun je de laadlogica toevoegen afhankelijk van je vereisten

    std::cout << "aan het opladen." << std::endl;
    soc = 100.0;  // Stel de SoC in op 100% om aan te geven dat de accu is opgeladen
}

void Accu::gebruikEnergie(double energie)
{
    // Simuleer het gebruik van energie
    // Hier kun je de logica toevoegen afhankelijk van je vereisten
    //soc -= (energie / capaciteit) * 100.0;

    // Zorg ervoor dat SoC niet onder 0 gaat
    if (soc < 0.0) {
        soc = 0.0;
    }
}

double Accu::getSoC() const
{
    return soc;
}
