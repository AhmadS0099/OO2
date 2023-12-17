
#include "Circuit.h"

Circuit::iterator::iterator(std::vector<IComponent*>::iterator it) : it(it) {}

Circuit::iterator& Circuit::iterator::operator++()
{
    ++it;
    return *this;
}

IComponent* Circuit::iterator::operator*()
{
    return *it;
}

bool Circuit::iterator::operator!=(const iterator& other) const
{
    return it != other.it;
}

Circuit::iterator Circuit::begin()
{
    return iterator(components.begin());
}

Circuit::iterator Circuit::end()
{
    return iterator(components.end());
}

void Circuit::add(IComponent* pcomponent)
{
    components.push_back(pcomponent);
    size++;
}
