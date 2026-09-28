#include<iostream>
#include <cmath>
enum enPrime{NotPrime=0,Prime=1};
using namespace std;

int ReadNum() {
	int num = 0; cout << "enter Num :"; cin >> num;
	return num;
}

enPrime CheckNumPrime() {
	int num = ReadNum();
	int sqr = sqrt(num);
	if (num <= 0) { return enPrime::NotPrime; }
	for (int i = 2; i <= sqr; i++) {
		if (num % i == 0)return enPrime::NotPrime;
	}
	return enPrime::Prime;
}

void PrintResult(enPrime result) {
	if (result == enPrime::Prime)cout << "\nnum is prime\n";
	else cout << "\nnot prime\n";
}

int main() {
	PrintResult(CheckNumPrime());
}
