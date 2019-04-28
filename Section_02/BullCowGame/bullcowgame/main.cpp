#include <iostream>
#include <string>
#include "FBullCowGame.h"
using namespace std;

// endl flushes the output buffer
// \n does not
// ' ' is for Characters
// " " is for strings
// && is for AND
// || is for OR
// [n] is for accessing strings, starting at n=0
// == is for comparison
// for do / while loop the code gets executed once before the check occurs

void PrintIntro();
void GetGuess();
bool bToPlayAgain();
void PlayGame();

FBullCowGame BCGame; // instantiation of a new game


// the entry point for the app
int main()
{
	do
	{
		PrintIntro();
		PlayGame();
	} 
	while (bToPlayAgain());
	return 0;
}

void PlayGame()
{
	BCGame.Reset();
	int MaxTries = BCGame.GetMaxTries();
		// Guess NUMBER_OF_LOOPS times.
	for (int i = 0; i < MaxTries; i++)
	{
		GetGuess();
		cout << endl;
	}
}

bool bToPlayAgain()
{
	cout << "Do you want to play again (y/n)?";
	string Response = "";
	getline(cin, Response);
	bool Repeat = (Response[0] == 'y' || Response[0] == 'Y');
	return Repeat;
}

void GetGuess()
{
	// Get a guess from the player
	int currentTry = BCGame.GetCurrentTry();
	string Guess = "";
	cout << "Try " << currentTry << ". Enter your guess here: ";
	getline(cin, Guess);
	cout << "Your guess was: " << Guess;
	cout << endl;
	return;
}

void PrintIntro()
{
	// Introduce the game
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows" << endl;
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram that I'm thinking of?\n";
	return;
}
