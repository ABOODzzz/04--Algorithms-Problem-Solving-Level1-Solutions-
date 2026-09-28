#include <iostream>
#include <string>

using namespace std;

string ReadName() {
	string name;
	cout << "enter ur name: ";
	getline(cin,name);
	return name;
}

void PrintName(string name) {
	cout << "ur name is : " << name<<endl;
}

int main() {
	PrintName(ReadName());
}
