#include "AutomaticNumberGuesser.h"
#include <iostream>
#include "NumberGuessGame.h"

AutomaticNumberGuesser::AutomaticNumberGuesser()
{

}

AutomaticNumberGuesser::~AutomaticNumberGuesser()
{
}

void AutomaticNumberGuesser::process(NumberGuessGame& game)
{
	unsigned lowerBound = game.getLowerBound();
	unsigned UpperBound = game.getUpperBound();

    while (lowerBound <= UpperBound)
    {
        unsigned guess = (lowerBound + UpperBound) / 2;
        NumberGuessGame::RESULT result = game.guess(guess);

        if (result == NumberGuessGame::FOUND)
        {
            std::cout << "Number guessed successfully!" << std::endl;
            break;
        }
        else if (result == NumberGuessGame::TOOLOW)
        {
            lowerBound = guess + 1;
        }
        else
        {
            UpperBound = guess - 1;
        }
    }
}
