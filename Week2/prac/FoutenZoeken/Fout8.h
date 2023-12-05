#pragma once

class Fout8
{
public:
                 Fout8();
    virtual     ~Fout8();

public:
    virtual void actie();

private:
    virtual void fineGrain();
    virtual void coarseGrain();
};

