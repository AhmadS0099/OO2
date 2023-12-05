#include "Fout1.h"

#include <iostream>

Fout1::Fout1()
{
    fillCollection();
}


Fout1::~Fout1()
{
}

void Fout1::actie()
{
    static int loop = 1;

    std::cout << " ---- loop " << loop << " ---- " << std::endl;

    showData();

    if ( isPresent("b") )
        std::cout << "'b' in collection" << std::endl;
    else
        std::cout << "'b' not in collection (NOT CORRECT!!!)" << std::endl;

    change_d_to_aa();

    loop += 1;
}

void Fout1::fillCollection()
{
    char  szText[2] ={0,0};
    char &c = *szText;

    for(c='a'; c<='i'; c++)
        strings.insert(szText);
}

void Fout1::showData() const
{
    for(const std::string& text : strings)
        std::cout << text << std::endl;
}

bool Fout1::isPresent( const std::string& text ) const
{
    return strings.find(text) != strings.end();
}

void Fout1::change_d_to_aa()
{
    auto                iFind    = strings.find("d");

    if ( isPresent("d") )
    {
        const std::string  &value    = *iFind;
        std::string        &toChange = (std::string&) value;

        toChange = "aa";
    }
}
