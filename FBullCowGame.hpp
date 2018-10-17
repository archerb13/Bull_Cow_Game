

#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <stdio.h>
#include <string>
using std::string;

class FBullCowGame
{
public:
    FBullCowGame ();  // Constructor
    
    int GetCurrentTry() const;
    int GetMaxTries() const;
    bool GameStatus() const;
    
    void Reset();  // TODO make a more rich return value
    bool IsGuessRight(string);  //TODO make a more rich return value
    
private:
    // Contructor initialization
    int MyCurrentTry;
    int MyMaxTries;
};

#endif /* FBullCowGame_hpp */
