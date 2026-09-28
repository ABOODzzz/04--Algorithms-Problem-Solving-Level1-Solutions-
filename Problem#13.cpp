#include<iostream>

using namespace std;
void ReaddNums(int &num1,int &num2,int &num3) {
	cout << "enter the num1: "; cin >> num1; cout << endl;
	cout << "enter the num2: "; cin >> num2; cout << endl;
	cout << "enter the num3: "; cin >> num3; cout << endl;

}

int maxNum(int num1,int num2,int num3) {
	if (num1 > num2 && num1 > num3)return num1;
	else if (num2 > num1 && num1 > num3)return num2;
	else return num3;
}

void PrintrResult(int result) {
	cout << "the max num is : " << result;
}

int main() {
	int num1, num2,num3;
	ReaddNums(num1,num2,num3);
	PrintrResult(maxNum(num1, num2,num3));
}
