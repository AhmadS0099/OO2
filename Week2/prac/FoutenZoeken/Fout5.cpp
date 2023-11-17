#include "Fout5.h"

#include <iostream>

Fout5::Fout5()
{
}


Fout5::~Fout5()
{
}

void Fout5::actie()
{
    char    text[80] = "na de dubbele punt moet 27 komen staan: ";

    std::cout << text + 27 << std::endl;
    std::cout << "maar er staat nergens 27..." << std::endl;
}
