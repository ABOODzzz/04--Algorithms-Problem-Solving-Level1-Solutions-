
#include <iostream>

using namespace std;
int Gnum=0,Lnum=0;
int ReadNum() {
	int num;
	cout << "enter num : "; cin >> num; cout << endl; return num;
}

bool CheckNum() {
	int num = ReadNum();
	Lnum = num;
	return num == -99;
}
void SumNums() {
	while (!CheckNum()) {
		Gnum += Lnum;
	} 
}
void PrintResult() {
	cout << "\nthe Num is : " << Gnum << endl;
}

int main() {
	SumNums();
	PrintResult();
}
