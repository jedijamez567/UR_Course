#include <iostream>
#include <string>
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
string GetGuess();
void Guess();
bool bToPlayAgain();
void PlayGame();

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
		// Guess NUMBER_OF_LOOPS times.
	constexpr int NUMBER_OF_LOOPS = 5;
	for (int i = 0; i < NUMBER_OF_LOOPS; i++)
	{
		Guess();
		cout << endl;
	}
}

void Guess()
{
	// Repeat the guess back to them
	string Guess = GetGuess();
	cout << "Your guess was: " << Guess;
	cout << endl;
	return;
}

bool bToPlayAgain()
{
	cout << "Do you want to play again (y/n)?";
	string Response = "";
	getline(cin, Response);
	bool Repeat = (Response[0] == 'y' || Response[0] == 'Y');
	return Repeat;
}

string GetGuess()
{
	// Get a guess from the player
	string Guess = "";
	cout << "Enter your guess here: ";
	getline(cin, Guess);
	return Guess;
}

void PrintIntro()
{
	// Introduce the game
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows" << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram that I'm thinking of?\n";
	return;
}
