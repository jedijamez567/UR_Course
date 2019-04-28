#pragma once
#include <string>

// NEVER use namespace in a header file

class FBullCowGame {
public:
	FBullCowGame(); // constructor

	void Reset(); // TODO make a more rich return value
	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool Outcome() const;
	bool CheckWord(std::string);// TODO make a more rich return value
	std::string GenerateWord();




// Ignore this
private:
	int MyCurrentTry;
	int MyMaxTry;
};