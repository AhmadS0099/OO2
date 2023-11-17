/*
 * NO NOT ADAPT THIS FILE
 */

#include "NumberGuessGame.h"
#include "AutomaticNumberGuesser.h"


int main()
{
    NumberGuessGame         cGame;
    AutomaticNumberGuesser  cGuesser;

    cGame.createNewNumber();
    cGuesser.process(cGame);

    return 0;
}
