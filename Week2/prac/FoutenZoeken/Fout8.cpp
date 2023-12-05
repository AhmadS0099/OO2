#include "Fout8.h"

#include <iostream>

Fout8::Fout8()
{
}

Fout8::~Fout8()
{
}

void Fout8::actie()
{
    fineGrain();
    std::cout << std::endl;
    coarseGrain();
}

void Fout8::fineGrain()
{
    double price1 = 0.30;
    double price2 = 0.10;
    double total  = 3 * price1 + price2;
    int    euros  = int( total );
    int    cents  = int( (total-euros) * 100.0 );

    std::cout << "3 * 30 cents + 10 cents is:  ";
    std::cout << euros << "," << cents << " euro" << std::endl;
}

void Fout8::coarseGrain()
{
    double value = 0.10;
    for ( int n = 0; n<= 20; n++ )
    {
        value = 11.0 * value - 1.0;
    }

    std::cout << " 0.10 = " << value << std::endl;
}
