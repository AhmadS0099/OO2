#pragma once

class Fout2
{
public:
                 Fout2();
    virtual     ~Fout2();


public:
    virtual void actie();

private:
    virtual void fillCollection();
    virtual void showData()         const;

private:
    int          rij[10];
};

