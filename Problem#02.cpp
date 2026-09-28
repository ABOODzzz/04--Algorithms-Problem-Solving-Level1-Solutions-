#include <iostream>

using namespace std;
int readNum() {
	int num;
	cout << "enter the num: ";
	cin >> num;
	return num;
}

bool isEven(int num) {
	return num % 2 == 0;
}

void printResult() {
	if (isEven(readNum()))cout << "the num  is even";
	else cout << "the num is odd";
}


int main() {
	printResult();
}
Dr sol
#include <iostream>

using namespace std;
enum enNumberTybe{odd=1,even=2};
int ReadNum() {
	int num;
	cout << "enter the num: ";
	cin >> num;
	return num;
}

enNumberTybe checkNumTybe(int num) {
	int result = num % 2;
	if (result == 0)return enNumberTybe::even;
	else enNumberTybe::odd;
}
void printResult(enNumberTybe numTybe) {
	if (numTybe == enNumberTybe::even)cout << "the num is even\n\n";
	else cout << "the num is odd\n\n";
}

int main() {
	printResult(checkNumTybe(ReadNum()));
}
