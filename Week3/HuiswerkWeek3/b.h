#pragma once

#include <iostream>

class a;  // Forward declaration

class b
{
public:
    b() {}
    b(a* A) {}  // Now takes a pointer to 'a'

    void Actie2(int n);
    void Actie3();

    void Even();
    void odd();
};