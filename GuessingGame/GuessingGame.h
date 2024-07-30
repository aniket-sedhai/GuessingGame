//
//  GuessingGame.h
//  GuessingGame
//
//  Created by Aniket Sedhai on 6/16/24.
//

#ifndef GUESSING_GAME_H
#define GUESSING_GAME_H

#include <stdio.h>

class GuessingGame
{
public:
    
    /**
    @brief Constructor.
     */
    GuessingGame(int largest_target_to_guess = 1);
    
    /**
     @brief This method accepts an integer to be evaluated as a guess value and compares it against the target guess value.
     @param[in] guess_made - a guess integer that needs to be evaluated against the target value
     @return - 0 for a correct guess, 1 for a guess higher than the target, -1 for a guess lower than the target
     */
    int MakeGuess(int guess_made);
    
private:
    int my_target_guess_value;
};

#endif /* GUESSING_GAME_H */
