#include<iostream>

using namespace std;

float readNum() {
	
	int choice;
	cout << "enter the tybe of num put: \n1-int\n2-float\n so ur choice is : "; cin >> choice;

	while (cin.fail()) {

		cin.clear(); // clears error state

		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // deletes wrong input

		cout << "Wrong input, enter a number again: ";

		cin >> choice;
	}
	switch (choice) {
	case 1: {
		int num1;
		cout << "\nenter the num here: "; cin >> num1; cout << endl; 

		while (cin.fail()) {

			cin.clear(); // clears error state

			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // deletes wrong input

			cout << "Wrong input, enter a number again: ";

			cin >> num1;
		}
		return num1;
	}
	case 2: {
		float num2;
		cout << "\nenter the num here: "; cin >> num2; cout << endl;

		while (cin.fail()) {

			cin.clear(); // clears error state

			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // deletes wrong input

			cout << "Wrong input, enter a number again: ";

			cin >> num2;
		}
		return num2;
	}
	default: cout << "enter number bitch_________" << endl; readNum();
	}
	
}

float findHalfOfNum(float num) {
	return num / 2;
}

void printResult(float num) {
	cout << "\n the half is : " << num << endl;
}

int main() {
	printResult(findHalfOfNum(readNum()));
}
