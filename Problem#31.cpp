#include <iostream>
#include <math.h>

using namespace std;
int ReadNum() {
	int num; cout << "enter num :"; cin >> num; cout << endl;
	return num;
}

int FindThepower2(int num){
	return pow(num, 2);

}
int FindThepower3(int num) {
	return pow(num, 3);

}
int FindThepower4(int num) {
	return pow(num, 4);

}
void PrintResult() {
	int num=ReadNum();
	cout << "the power of 2 for " << num << " is : " << FindThepower2(num) << endl;
	cout << "the power of 3 for " << num << " is : " << FindThepower3(num)<<endl;
	cout << "the power of 4 for " << num << " is : " << FindThepower4(num) << endl;

}


int main() {
	PrintResult();
}
