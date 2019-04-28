#include "FBullCowGame.h"

FBullCowGame::FBullCowGame()
{
	Reset();
}

void FBullCowGame::Reset()
{
	constexpr int MAX_TRIES = 8;
	MyMaxTry = MAX_TRIES;
	MyCurrentTry = 1;
	return;
}

int FBullCowGame::GetMaxTries() const { return MyMaxTry; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

bool FBullCowGame::CheckWord(std::string)
{
	return false;
}

std::string FBullCowGame::GenerateWord()
{
	return std::string();
}

bool FBullCowGame::Outcome() const
{
	return false;
}
