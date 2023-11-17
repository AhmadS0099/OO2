#pragma once

#include <set>
#include <string>

class Fout1
{
public:
                 Fout1();
    virtual     ~Fout1();

public:
    virtual void actie();

private:
    virtual void fillCollection();
    virtual void showData()                         const;
    virtual bool isPresent( const std::string& )    const;
    virtual void change_d_to_aa();

private:
    std::set<std::string> strings;
};

