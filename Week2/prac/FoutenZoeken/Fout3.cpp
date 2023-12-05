#include "Fout3.h"

#include <iostream>

Fout3::Fout3()
{
}


Fout3::~Fout3()
{
}

void Fout3::actie()
{
    int waarde = 150;
    int  result;

    result = waarde * waarde / waarde;
    std::cout << "150 = " << waarde << std::endl;
    std::cout << "150 = " << result << std::endl;
    result = waarde;
    std::cout << "150 = " << result << std::endl;
    result = char(waarde - 100);
    std::cout << " 50 = " << result << std::endl;
}
