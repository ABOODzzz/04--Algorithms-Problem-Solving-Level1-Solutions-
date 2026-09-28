#include <iostream>
#include <math.h>

using namespace std;
int ReadNum() {
	int num; cout << "enter num :"; cin >> num; cout << endl;
	return num;
}
int ReadRange() {
	int range; cout << "enter range :"; cin >>range; cout << endl;
	return range;
}
int CalculatePow(int num,int to){
	int result=num;
	for (int i = 1; i < to; i++)
	result*=num;
	return result;
}

void PrintResult() {
	int num=ReadNum();
	int range = ReadRange();
	cout << "the pow of " << num << " to " << range<< " is :"<<CalculatePow(num,range);

}


int main() {
	PrintResult();
}
