
#include "Circuit.h"
#include <iostream>

iterator::iterator(std::vector<IComponent*>::iterator it) : it(it) {}

iterator& iterator::operator++()
{
    ++it;
    return *this;
}

IComponent* iterator::operator*()
{
    return *it;
}

bool iterator::operator!=(const iterator& other) const
{
    return it != other.it;
}

iterator Circuit::begin()
{
    return iterator(components.begin());
}

iterator Circuit::end()
{
    return iterator(components.end());
}

void Circuit::add(IComponent* pcomponent)
{
    components.push_back(pcomponent);
    size++;
    std::cout << "test" << std::endl;
}
