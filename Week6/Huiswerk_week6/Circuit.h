
#pragma once
#include <vector>
#include "IComponent.h" 

class Circuit
{
public:
    void add(IComponent* pcomponent);

    class iterator;

    iterator begin();
    iterator end();

private:
    std::vector<IComponent*> components; 
    unsigned size = 0;
};



class Circuit::iterator
{
public:
    iterator(std::vector<IComponent*>::iterator it);

    iterator& operator++();
    IComponent* operator*();
    bool operator!=(const iterator& other) const;

private:
    std::vector<IComponent*>::iterator it;
};
