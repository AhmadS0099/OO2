// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "ProcessFile.h"

#include <fstream>
#include <iostream>

#define szFilename "HuiswerkWeek1.dat"

int main()
{
    std::ifstream   cInput(szFilename, std::ios::in | std::ios::binary);
    ProcessFile     cProcessFile;

    if (cInput)
    {
        cProcessFile.process(cInput);

        cInput.close();
    }

    std::cin.get();

    return 0;
}
