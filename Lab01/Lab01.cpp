// Lab01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "time.h"
using namespace std;

int main()
{
	srand(time(NULL));
	int x = rand() % 1000 + 1;
	int y;
	int i = 8;
	cout << "I have selected a random number, I will give you " << i << " tries to guess what it is" << endl;
	for (; i > 0; i--) {
		cout << "You have " << i << " guesses remaining:" << endl;
		cin >> y;
		if (y == x) {
			i = 0;
		}
		else if (y < x) {
			cout << "Try a higher number" << endl;
		}
		else if (y > x) {
			cout << "My number is lower than that" << endl;
		}
	}
	if (y == x) {
		cout << "My number was " << x << ", you got it exactly right!" << endl;
	}
	else {
		cout << "The number I selected was " << x << ", better luck next time" << endl;
	}
	system("pause");
}
