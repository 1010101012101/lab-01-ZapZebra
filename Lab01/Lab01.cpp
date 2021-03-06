#include "pch.h"
#include <iostream>
#include "time.h"
using namespace std;

int main()
{

	srand(time(NULL));
	int x = rand() % 100 + 1;
	int y;
	int bestGuess;
	int lastGuess;
	int guesses = 5;
	cout << "I have selected a random number, I will give you " << guesses << " tries to guess what it is" << endl;
	for (int i = guesses; i > 0; i--) {
		cout << "You have " << i << " guesses remaining:" << endl;
		cin >> y;
		if (y == x) {
			i = 0;
		}
		if (i == guesses) {
			bestGuess = y;
			lastGuess = y;
		}
		else if (abs(y - x) < abs(bestGuess - x)) {
			bestGuess = y;
		}
		if (i < guesses && i > 1) {
			if (abs(y - x) < abs(lastGuess - x)) {
				cout << "Getting warmer, ";
			}
			else {
				cout << "Colder, ";
			}
			lastGuess = y;
		}
		if (i > 1) {
			if (abs(y - x) < 2) {
				if (y < x) {
					cout << "just a tiny amount more" << endl;
				}
				else if (y > x) {
					cout << "only a tiny bit less" << endl;
				}
			}
			else if (abs(y - x) < 5) {
				if (y < x) {
					cout << "just a little bit higher" << endl;
				}
				else if (y > x) {
					cout << "try a little lower" << endl;
				}
			}
			else {
				if (y < x) {
					cout << "try a higher number" << endl;
				}
				else if (y > x) {
					cout << "my number is lower than that" << endl;
				}
			}
		}
	}
	if (y == x) {
		cout << "My number was " << x << ", you got it exactly right!" << endl;
	}
	else {
		cout << "The number I selected was " << x << ", your closest guess was " << bestGuess << ", better luck next time" << endl;
	}
	system("pause");
}
