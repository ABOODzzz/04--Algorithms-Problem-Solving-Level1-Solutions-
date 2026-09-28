#include <iostream>

using namespace std;
struct stInvist {
	int dolar, nickel, dime, quarter, penny;
};
stInvist ReadInvist() {
	stInvist inv;
	cout << "how many dollers do u have : "; cin >> inv.dolar; cout << endl;
	cout << "how many dime do u have : "; cin >> inv.dime; cout << endl;
	cout << "how many nickel do u have : "; cin >> inv.nickel; cout << endl;
	cout << "how many penny do u have : "; cin >> inv.penny; cout << endl;
	cout << "how many quarter do u have : "; cin >> inv.quarter; cout << endl;
	return inv;
}
int CalculateSumPenny(stInvist inv) {
	return (inv.dolar * 100 + inv.dime * 10 + inv.nickel * 5 + inv.penny + inv.quarter * 25);
}
void PrintHowManyPennies(int Pennies) {
	cout << Pennies << " pennies\n";
}
void PrintHowManyDollers(int Pennies) {
	cout << float(Pennies)/100 << " pennies\n";
}
int main() {
	int Result = CalculateSumPenny(ReadInvist());
	PrintHowManyPennies(Result);
	PrintHowManyDollers(Result);
}
