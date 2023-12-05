#pragma once

/*
 * NO NOT ADAPT THIS FILE
 */

class NumberGuessGame;

class AutomaticNumberGuesser
{
public:
    AutomaticNumberGuesser();
    virtual                ~AutomaticNumberGuesser();

public:
    virtual void            process(NumberGuessGame&);
};

