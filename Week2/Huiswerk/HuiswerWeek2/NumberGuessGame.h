#pragma once

/*
 * NO NOT ADAPT THIS FILE
 */

class NumberGuessGame
{
public:
    NumberGuessGame();
    NumberGuessGame(unsigned);
    virtual            ~NumberGuessGame();

public:
    virtual void        createNewNumber();
    virtual unsigned    getLowerBound()     const;
    virtual unsigned    getUpperBound()     const;

public:
    enum RESULT { TOOLOW = -1, FOUND = 0, TOOHIGH = 1 };

    virtual enum RESULT guess(unsigned);
    virtual unsigned    numberOfGuesses()   const;

private:
    virtual void        initialize(unsigned);
    virtual double      uniform()           const;

private:
    unsigned            m_uLowerBound;
    unsigned            m_uUpperBound;
    unsigned            m_uNumberToGuess;
    unsigned            m_uNumberOfGuesses;
};

