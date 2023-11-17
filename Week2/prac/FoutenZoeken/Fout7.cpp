#include "Fout7.h"

#include <iostream>
#include <fstream>
#include <string>

Fout7::Fout7()
{
}

Fout7::~Fout7()
{
}

void Fout7::actie()
{
    std::ifstream input( "test\test.txt" );
    std::string   text;

    try
    {
        if ( input )
        {
            std::getline(input,text);
            std::cout << text << std::endl;
        }
        else
            std::cout << "Een fout gevonden (1)" << std::endl;
    }
    catch( ... )
    {
        std::cout << "Een fout gevonden (2)" << std::endl;
    }
}
