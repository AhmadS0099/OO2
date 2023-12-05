#include "Fout4.h"

#include <iostream>

Fout4::Fout4()
{
    const int SIZE = 10;

    rij = new int[SIZE];

    for ( int n=0; n<SIZE; n++ )
        rij[n] = n + 1;
}


Fout4::~Fout4()
{
    delete[] rij;
}

void Fout4::actie()
{
    checkForLeaks();

    for ( int n=0; n<10; n++ )
        std::cout << n << std::endl;
}

void Fout4::checkForLeaks()
{
#ifdef _DEBUG

    int flag = _CrtSetDbgFlag(_CRTDBG_REPORT_FLAG);

    flag    |= _CRTDBG_LEAK_CHECK_DF;

    _CrtSetDbgFlag(flag);

#endif
}
