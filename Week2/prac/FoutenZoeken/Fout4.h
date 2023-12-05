#pragma once

class Fout4Base
{
public:
                 Fout4Base() {}
                ~Fout4Base() {}

public:
    virtual void actie() = 0;
};

class Fout4 : public Fout4Base
{
public:
     Fout4();
    ~Fout4();

public:
    virtual void actie();

private:
    virtual void checkForLeaks();

private:
    int         *rij;

};

