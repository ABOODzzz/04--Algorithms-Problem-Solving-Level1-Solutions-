#include<iostream>

using namespace std;

int ReadNum() {
	int num;
	cout << "enter num: "; cin >> num; cout << endl;
	return num;
}

void PrintNumsFor(int num){
	cout << "these are the num from 0 up to " << num<<" :";
	for (int i = 1; i <= num; i++) {
		cout << " " << i;
}
}
void PrintNumsWhile(int num) {
	int i = 1;
	cout << "these are the num from 0 up to " << num << " :";
	while (i<=num) {
		cout << " " << i; i++;
	}
}

void PrintNumsDoWhile(int num) {
	int i = 1;
	cout << "these are the num from 0 up to " << num << " :";
	 do{
		cout << " " << i; i++;
	 } while (i <= num);
}

int main() {
	int num = ReadNum();
	cout << "using For :";
	PrintNumsFor(num);
	cout << "\n\nusing while :   ";
	PrintNumsDoWhile(num);
	cout << "\n\nusing do while :   ";

	PrintNumsWhile(num);
}
/*
#include<iostream>

using namespace std;

int ReadNum() {
	int num;
	cout << "enter num: "; cin >> num; cout << endl;
	return num;
}

void PrintNumsFor(int num){
	cout << "these are the num from 0 up to " << num<<" :";
	for (int i = num; i >= 1; i--) {
		cout << " " << i;
}
}
void PrintNumsWhile(int num) {
	int i = num;
	cout << "these are the num from 0 up to " << num << " :";
	while (i>=1) {
		cout << " " << i; i--;
	}
}

void PrintNumsDoWhile(int num) {
	int i = num;
	cout << "these are the num from 0 up to " << num << " :";
	 do{
		cout << " " << i; i--;
	 } while (i >= 1);
}

int main() {
	int num = ReadNum();
	cout << "using For :";
	PrintNumsFor(num);
	cout << "\n\nusing while :   ";
	PrintNumsDoWhile(num);
	cout << "\n\nusing do while :   ";

	PrintNumsWhile(num);
}
*/
