// Visitor.h
#pragma once

class Resistor;
class Capacitor;
class Inductor;

class Visitor
{
public:
    Visitor() {}
    virtual ~Visitor() {}

public:
    virtual void visit(Resistor& resistor);
    virtual void visit(Capacitor& capacitor);
    virtual void visit(Inductor& inductor);
};
