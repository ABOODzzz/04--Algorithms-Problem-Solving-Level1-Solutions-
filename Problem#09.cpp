#include<iostream>
#include <array>
using namespace std;

void ReadNums(int &num1,int &num2,int &num3) {
	cout << "enter the num1 : "; cin >> num1; cout << endl;
	cout << "enter the num2 : "; cin >> num2; cout << endl;
	cout << "enter the num3 : "; cin >> num3; cout << endl;
}

int calculateResult(int num1, int num2,int num3) {
	return num1 + num2 + num3;
}

void printResult(int result) {
	cout << "\n\nthe result is : " << result<<endl;
}

int main() {
	int num1, num2, num3;
	ReadNums(num1,num2,num3);
	
	printResult(calculateResult(num1, num2, num3));

}
