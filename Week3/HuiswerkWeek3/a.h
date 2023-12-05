#pragma once

#include <iostream>

class b;  // Forward declaration

class a
{
public:
    a() {}
    virtual ~a() {}

    void setB(b*);

    void Actie1(int n);

private:
    b* B;
};
