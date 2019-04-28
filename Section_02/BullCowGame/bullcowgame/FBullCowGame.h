#pragma once
#include <string>

// NEVER use namespace in a header file

class FBullCowGame {
public: 
	void Reset(); // TODO make a more rich return value
	int GetMaxTries();
	int GetCurrentTry();
	bool CheckWord(std::string);// TODO make a more rich return value
	std::string GenerateWord();
	bool Outcome();




// Ignore this
private:
	int MyCurrentTry;
	int MyMaxTry;
};