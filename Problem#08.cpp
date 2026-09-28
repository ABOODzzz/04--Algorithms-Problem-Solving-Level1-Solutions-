#include<iostream>

using namespace std;

enum enPassOrFail {pass=1,fail=0};
int readNum() {
	int mark;
	cout << "enter mark :"; cin >> mark; cout << endl;
	return mark;
}
enPassOrFail checkMark(int mark){
	if (mark >= 50)return enPassOrFail::pass;
	else return enPassOrFail::fail;
}

void PrintResult(int mark) {
	cout << "\nthe result is : ";
	if (checkMark(mark) == enPassOrFail::pass)cout << "u passed\n\n";
	else cout << " u failed\n\n";
}
int main() {
	PrintResult(readNum());
}
/*
//code 2:
#include<iostream>

using namespace std;



int ReadMark() {
	int mark;
	cout << "enter the mark: "; cin >> mark; cout << endl;
	while (cin.fail()||mark>100||mark<0) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "\n\nreEnter mf: "; cin >> mark; cout << "\n\n";
	}
	return mark;

}
bool markResult(int mark) {
	if (mark >= 50)return true;
	else return false;
}

void printResult(bool result) {
	if (result)cout << "u passed\n\n";

	else cout << "u faild\n\n";

}


int main() {
	printResult(markResult(ReadMark()));
}

*/
