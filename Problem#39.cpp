#include<iostream>

using namespace std;

struct stMoney {
	float TotalBill=0.0,CashPaid=0.0,total=0;
};
stMoney ReadBill() {
	stMoney money;
	do {
		cout << "\nenter the Bill: "; cin >> money.TotalBill; cout << endl;
	} while (money.TotalBill < 0);
	do {
		cout << "\nenter the cash paid: "; cin >> money.CashPaid; cout << endl;
	} while (money.CashPaid<0); return money;
}

stMoney Total(stMoney money) {
	
	money.total= money.CashPaid - money.TotalBill;
	return money;
}

void PrintResult(stMoney money) {
	if (money.total < 0)cout << "Give customer " << money.total;
	else cout << "Customer still owes " << -money.total;
}

int main() {
	PrintResult(Total(ReadBill()));
}
