#include <iostream>
#include "a.h"
#include "b.h"

int main()
{
    a A;
    b B(&A);  

    A.setB(&B); 

    A.Actie1(20);

    B.Actie2(20);

    return 0;
}
