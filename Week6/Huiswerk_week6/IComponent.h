
#pragma once

class Visitor; 

class IComponent
{
public:
    virtual double getValue() = 0;
    virtual void accept(Visitor& visitor) = 0;
};