#include <iostream>
#include <string>
#include "FBullCowGame.hpp"
using std::cout; using std::endl; using std::cin;
using std::string;

void PrintIntro();
string GetGuess();
void PlayGame();
bool AskToPlayAgain();

FBullCowGame BCGame;  // Intantiate a new game


int main()
{
    do
    {
        PrintIntro();
        PlayGame();
    }
    while(AskToPlayAgain());
    
    return 0; // Exits app
}

// Introduce game
void PrintIntro()
{
    // Sets a constant for comparison and prints intro
    constexpr int WORD_LENGTH = 9;
    cout << "Welcome to Bulls and Cows, a fun word game.\n";
    cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
    cout << endl;
    return;
}

// Loops throg game
void PlayGame()
{
    BCGame.Reset();
    int MaxTries = BCGame.GetMaxTries();
    
    // Loop for number of guesses
    // TODO: change FOR to WHILE loop
    for(int i = 0; i < MaxTries; i++)
    {
        string USER_GUESS = GetGuess(); // TODO: make loop check validation
        // Submit valid guess to game
        // Submit number of bulls and cows
        cout << "Your guess was: " << USER_GUESS << endl;
        cout << endl;
    }
    
    // TODO: Summarise game
}

// Get guess from player
string GetGuess()
{
    int CurrentTry = BCGame.GetCurrentTry();
    
    // Takes in empty string and reads it
    cout << "Try " << CurrentTry << ". Enter your guess: ";
    string Guess = "";
    getline(cin, Guess);
    
    return Guess;
}


bool AskToPlayAgain()
{
    cout << "Do you want to play again (y/n)? ";
    string Response = "";
    getline(cin, Response);
    
    if(Response[0] == 'y' || Response[0] == 'Y')
    {
        cout << endl;
        return 1;
    }
    return 0;
}
