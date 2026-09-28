#include <iostream>

using namespace std;
struct stInfo {
	int age;
	bool HasDriveLicens;
	bool wasta;
};

stInfo ReadInfo() {
	stInfo info;
	cout << "enter ur age : "; cin >> info.age; cout << endl;
	cout << "Do u have DriveLicens yes 1 no 0: "; cin >> info.HasDriveLicens; cout << endl;
	cout << "do u have wasta if yes put 1 no 0 : "; cin >> info.wasta; cout << endl;
	return info;
}
bool IsHired(stInfo info) {
	return (info.wasta||(info.age > 21 && info.HasDriveLicens));
}

void PrintResult(stInfo info){
	if (IsHired(info))cout << "u are hired \n\n";
	else cout << "u are rejected\n\n";

}

int main() {
	PrintResult(ReadInfo());
}
