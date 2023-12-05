/*
 * NO NOT ADAPT THIS FILE
 */

#include "NumberGuessGame.h"

#include <cmath>
#include <cstdlib>
#include <ctime>

#include <iomanip>
#include <iostream>

#define INITRANDOM  100

 ///////////////////////////////////////////////////////////////////////////////
 //  constructors / destructor

NumberGuessGame::NumberGuessGame()
{
    initialize(unsigned(::time(nullptr)));
}

NumberGuessGame::NumberGuessGame(unsigned uSeed)
{
    initialize(uSeed);
}

NumberGuessGame::~NumberGuessGame()
{
}

///////////////////////////////////////////////////////////////////////////////
//  create new game + boundaries

void
NumberGuessGame::createNewNumber()
{
    double  dInterval = ::pow(20.0, 1.0 + 2.0 * uniform());

    m_uLowerBound = unsigned(dInterval * uniform());
    m_uUpperBound = unsigned(m_uLowerBound + dInterval);
    m_uNumberToGuess = m_uLowerBound + unsigned(dInterval * uniform());

    m_uNumberOfGuesses = 0;
}

unsigned
NumberGuessGame::getLowerBound() const
{
    return m_uLowerBound;
}

unsigned
NumberGuessGame::getUpperBound() const
{
    return m_uUpperBound;
}

///////////////////////////////////////////////////////////////////////////////
//  guessing process

enum NumberGuessGame::RESULT
    NumberGuessGame::guess(unsigned uValue)
{
    m_uNumberOfGuesses += 1;

    if (uValue == m_uNumberToGuess)
    {
        std::cout << std::setw(3) << m_uNumberOfGuesses << ": number guessed : " << uValue << std::endl;
        return FOUND;
    }

    if (uValue < m_uNumberToGuess)
    {
        std::cout << std::setw(3) << m_uNumberOfGuesses << ": number too low : " << uValue << std::endl;
        return TOOLOW;
    }
    else
    {
        std::cout << std::setw(3) << m_uNumberOfGuesses << ": number too high: " << uValue << std::endl;
        return TOOHIGH;
    }
}

unsigned
NumberGuessGame::numberOfGuesses()   const
{
    return m_uNumberOfGuesses;
}

///////////////////////////////////////////////////////////////////////////////
//  private members

void
NumberGuessGame::initialize(unsigned uSeed)
{
    m_uLowerBound = 0;
    m_uUpperBound = 1;
    m_uNumberToGuess = unsigned(-1);
    m_uNumberOfGuesses = unsigned(-1);

    ::srand(uSeed);

    for (unsigned n = 0; n < INITRANDOM; n++)
        ::rand();
}

double
NumberGuessGame::uniform() const
{
    return ::rand() / double(RAND_MAX);
}
