#include <iostream>
#include <string>
using namespace std;

struct stInfo {
	string Fname;
	string Lname;
	bool reverse;
};

stInfo ReadInfo() {
	stInfo info;
	cout << "enter ur Fname: "; getline(cin, info.Fname); cout << endl;
	cout << "enter ur Lname: "; getline(cin, info.Lname); cout << endl;
	cout << "u want ur name in reverse order yes put 1 no put 0 : "; cin >> info.reverse; cout << endl;
	return  info;
}


string FullName(stInfo info) {
	if(info.reverse==true)
	return info.Lname + " " + info.Fname;
	else
		return info.Fname + " " + info.Lname;
}

void printFullName(string fullName) {
	cout << "ur name is : " << fullName<<"\n\n";
}

int main() {
	printFullName(FullName(ReadInfo()));
}
