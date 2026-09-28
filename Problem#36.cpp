#include <iostream>

using namespace std;
struct stCalculater {
	char method;
	int num1, num2;
};

stCalculater ReadThings() {
	stCalculater Calculater;
	cout << "enter the method +,-,/,* :"; cin >> Calculater.method; cout << endl;
	cout << "enter num1: "; cin >> Calculater.num1; cout << endl;
	cout << "enter num2: "; cin >> Calculater.num2; cout << endl; return Calculater;
}

float CalculateThings(stCalculater Calculater) {
	switch (Calculater.method) {
	case '+':return Calculater.num1 + Calculater.num2;
	case '-':return Calculater.num1 - Calculater.num2;
	case '*':return Calculater.num1 * Calculater.num2;
	case'/':return float(Calculater.num1) / Calculater.num2;
	default:cout << "\nenter just +,-,/,* "; return CalculateThings(ReadThings());
	}
}
void PrintResult(float result) {
	cout << "\nthe result is : " << result<<endl;
}

int main() {
	PrintResult(CalculateThings(ReadThings()));
}
