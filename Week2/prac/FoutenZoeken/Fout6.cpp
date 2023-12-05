#include "Fout6.h"

#include <iostream>

Fout6::Fout6()
{
}


Fout6::~Fout6()
{
}

void Fout6::actie()
{
    std::cout << "rectangle 5 * 6:" <<std::endl;

    for ( n = 0; n < 6; n++ )
        drawOneLine( 5 );
}

void Fout6::drawOneLine( int width )
{
    for(n=0; n<width; n++)
        std::cout << "x";
    std::cout << std::endl;
}
