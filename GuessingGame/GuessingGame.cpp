//
//  GuessingGame.cpp
//  GuessingGame
//
//  Created by Aniket Sedhai on 6/16/24.
//

#include "GuessingGame.h"
#include <cstdlib>

GuessingGame::GuessingGame(int largest_target_to_guess) :
    my_target_guess_value(largest_target_to_guess)
{
    
}

/**
 ****************************************************************************************
 */

int GuessingGame::MakeGuess(int guess_made)
{
    if (guess_made < my_target_guess_value)
    {
        return -1;
    }
    else if (guess_made > my_target_guess_value)
    {
        return 1;
    }
    
    return 0;
}
