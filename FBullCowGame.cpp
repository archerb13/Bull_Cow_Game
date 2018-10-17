#include "FBullCowGame.hpp"

FBullCowGame::FBullCowGame() { Reset(); }
int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

void FBullCowGame::Reset()
{
    constexpr int MAX_TRY = 8;
    
    MyMaxTries = MAX_TRY;
    MyCurrentTry = 1;
}


bool FBullCowGame::GameStatus() const
{
    return false;
}

bool FBullCowGame::IsGuessRight(string)
{
    return false;
}
