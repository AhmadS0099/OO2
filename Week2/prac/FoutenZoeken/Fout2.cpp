#include "Fout2.h"

#include <iostream>

Fout2::Fout2()
{
    fillCollection();
}


Fout2::~Fout2()
{
}

void Fout2::actie()
{
    showData();
}

void Fout2::fillCollection()
{
    const int size = sizeof(rij) / sizeof(rij[0]);

    for ( int n=0; n<size; n++ )
        rij[n] = n + 1;
}

void Fout2::showData() const
{
    const int size = sizeof(rij) / sizeof(rij[0]);
    for (int n = 0; n < size; n++)
        std::cout << rij[n] << std::endl;
}
