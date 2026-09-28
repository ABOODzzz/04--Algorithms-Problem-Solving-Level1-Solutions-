#include <iostream>

using namespace std;
struct stInfo {
	int age;
	bool DL;
};

stInfo ReadInfo() {
	stInfo info;
	cout << "ente ur age: "; cin >> info.age; cout << "\n\n";
	cout << "do u have DL if no put 0 yes put 1 : "; cin >> info.DL; cout << "\n\n";
	return info;
}

bool isHired(stInfo info) {
	return (info.age > 21 && info.DL);
}

void PrintRsult() {
	if (isHired(ReadInfo())) cout << "\nu are hired\n";
	else cout << "\nu are rejected\n";
}

int main() {
	PrintRsult();
}
