#include <iostream>

using namespace std;

int ReadMark() {
	int mark=0;
	do {
		cout << "enter ur mark: "; cin >> mark; cout << endl;
	} while (mark < 0 || mark>100);
	return mark;
}

char MarkChar(int mark) {
	if (mark >= 90 && mark <= 100)return 'A';
	else if (mark >= 80 && mark <= 90)return 'B';
	else if (mark >= 70 && mark <= 80)return 'C';
	else if (mark >= 60 && mark <= 70)return 'D';
	else if (mark >= 50 && mark <= 60)return 'E';
	else return 'F';
}
void PrintResult(char result) {
	cout << "\nur mark is : " << result << endl;
}


int main() {
	PrintResult(MarkChar(ReadMark()));
}
