// Opteller.cpp
#include "Opteller.h"
#include <algorithm>
#include <array>
#include <iostream>

void Opteller::telOp()
{
    std::array<int, 9> rij = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    // Vang 'sum' expliciet in de lambda-functie
    std::for_each(rij.begin(), rij.end(), [this](int value) { sum += value; });

    std::cout << sum << std::endl;
}
