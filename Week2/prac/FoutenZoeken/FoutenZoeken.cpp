#include "Fout1.h"
#include "Fout2.h"
#include "Fout3.h"
#include "Fout4.h"
#include "Fout5.h"
#include "Fout6.h"
#include "Fout7.h"
#include "Fout8.h"

#include <iostream>

void fout1();
void fout2();
void fout3();
void fout4();
void fout5();
void fout6();
void fout7();
void fout8();

int main()
{
   // fout1();
   // fout2();
   // fout3();
   fout4();
    //fout5();
    //fout6();
    //fout7();
    //fout8();

    std::cin.get();

    return 0;
}

void fout1()
{
    Fout1 cFout;

    cFout.actie();
    cFout.actie();
}

void fout2()
{
    Fout2 cFout;

    cFout.actie();
}

void fout3()
{
    Fout3 cFout;

    cFout.actie();
}

void fout4()
{
    Fout4Base *pFout = new Fout4;

    pFout->actie();

    delete pFout;

    std::cout << "leaks will be found..." << std::endl;
}


void fout5()
{
    Fout5 cFout;

    cFout.actie();
}

void fout6()
{
    Fout6 cFout;

    cFout.actie();
}

void fout7()
{
    Fout7 cFout;

    cFout.actie();
}

void fout8()
{
    Fout8 cFout;

    cFout.actie();
}
