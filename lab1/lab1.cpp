#include <iostream>
#include <cstdlib>
#include <ctime>


int promptUserForMaxRange() {
	int maxRange;
	std::cout << "Enter the maximum range: ";
	std::cin >> maxRange;
	if (maxRange < 0) {
		std::cout << "Invalid input. Input must be a valid int. Please try again." <<  std::endl;
	}
	return maxRange;
}

int pickRandomNumberInRange(int min, int max) {
	//seed the random number generator with the current time
	std::srand(std::time(0));

	int randomNumber;
	randomNumber = std::rand() % max;
	return randomNumber;
}
int promptUserForGuess(int maxRange) {
	int userGuess;
	std::cout << "Enter your guess: ";
	std::cin >> userGuess;
	if (userGuess > maxRange) {
		std::cout << "Enter your guess: ";
	}
	else if (userGuess < 0) {
		std::cout << "Enter your guess: ";
	}
	else {
		std::cout << "Enter your guess: ";
	}

	return userGuess;
}
bool promptForPlayAgain() {
	char playAgain;

	std::cout << "Do you want to play again ? [y/n] ";
	std::cin >> playAgain;
	if (playAgain == 'Y') {
		return true;
	}
	else if (playAgain == 'N') {
		return false;
	}
	else
		std::cout << "Invalid input. Try again [y/n]";
}
void playOneRound() {

}

int main() {
	

	int maxR = 0;
	int randomN = 0;
	bool finishGame = false;

	do {
		maxR = promptUserForMaxRange();
		randomN = pickRandomNumberInRange(0, maxR);
		while (!finishGame) {
			promptUserForGuess(maxR);
		
		}
		
	} while (promptForPlayAgain());

	
	return 0;
	
}