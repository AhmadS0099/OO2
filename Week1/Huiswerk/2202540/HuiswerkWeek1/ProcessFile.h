#pragma once

/*
 * DO NOT ADAPT THIS FILE!!!
 */


#include <fstream>

class ProcessFile
{
public:
                    ProcessFile();
    virtual        ~ProcessFile();

public:
    virtual void    process( std::ifstream& );

private:
    enum GETAL { LONG=1, SHORT, DOUBLE, FLOAT };
};
