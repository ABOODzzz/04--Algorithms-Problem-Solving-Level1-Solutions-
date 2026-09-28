#include <iostream>

using namespace std;

int ReadSales() {
	int sale=0;
	do {
		cout << "enter ur sale: "; cin >> sale; cout << endl;
	} while (sale < 0);
	return sale;
}

float salePerscent(int sale) {
	int result = 0;
	if (sale >= 1000000)return 0.01;
	else if (sale >= 500000 && sale < 1000000) return 0.02;
	else if (sale >= 100000 && sale < 500000)return 0.03 ;
	else if (sale >= 50000 && sale < 100000)return 0.05 ;
	else return 0.0;
}
float Calculatetotal(float sale) {
	return salePerscent(sale) * sale;
}
void PrintResult(float result) {
	cout << "\nur profit is : " << result << endl;
}


int main() {
	PrintResult(Calculatetotal(ReadSales()));
}
