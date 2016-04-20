#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();


// The entry point for our application
int main() 
{
	PrintIntro();
	PlayGame();
	AskToPlayAgain();
	return 0; //exit application
}


//Introduce the game
void PrintIntro()
{
	constexpr int WORLD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows!\n";
	cout << "Can you guess the " << WORLD_LENGTH << " letter isogram I'm thinking of?\n";
	return;
}

// loop for the number of turns asking for guesses
void PlayGame()
{
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 0; i < NUMBER_OF_TURNS; i++)
	{
		string Guess = GetGuess();
		cout << "You guessed: " << Guess << ".\n";
	}
}

//Get a guess from the player
string GetGuess() 
{
	cout << "\nWhat is your guess? ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	cout << "Do you wanna play again?\n";
	string Response = "";
	getline(cin, Response);
	cout << (Response[0] == 'y' || Response[0] == 'Y');
	cout << endl;

	return false;
}