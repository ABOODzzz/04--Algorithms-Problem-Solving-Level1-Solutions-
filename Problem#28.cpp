#include<iostream>

using namespace std;
enum enCheckOddEven{even=0,odd=1};
int ReadNum() {
	int num;
	cout << "enter num: "; cin >> num; cout << endl;
	return num;
}
enCheckOddEven checkOddOrEven(int num) {
	if (num % 2 == enCheckOddEven::odd)return enCheckOddEven::odd;
	else return enCheckOddEven::even;
}

int SumOdds(int num) {
	int sumOdds=0;
	for (int i = 1; i <= num; i++) {
		if (checkOddOrEven(i)==enCheckOddEven::odd)sumOdds += i;
	}return sumOdds;

}
int SumOddsWhile(int num) {
	int i=0,sumOdds = 0;
	while (i <= num) {
		if (i % 2 == 1)sumOdds += i; i++;
	}
	return sumOdds;

}

int SumOddsDoWhile(int num) {
	int i=0,sumOdds = 0;
	 do{
		 if (i % 2 == 1)sumOdds += i; i++;
	}while (i <= num);
	return sumOdds;

}




void PrintResult(int num) {
	int sumOdds = SumOdds(num);
	cout << "the odds sum from 1 to " << num << " is " << sumOdds << endl;
}
int main() {
	PrintResult(ReadNum());
}
