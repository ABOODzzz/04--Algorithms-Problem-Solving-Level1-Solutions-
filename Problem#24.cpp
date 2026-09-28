#include<iostream>

using namespace std;

int ReadAge() {
	int age;
	cout << "enter age bet 18-45 :"; cin >> age;
	return age;
}

bool ValidateNumber(int age,int from,int to) {
	return (age >= from && age <= 45);
}
int ReadInRange(int from,int to) {
	int age = 0;
	do {
		age = ReadAge();
	} while (!ValidateNumber(age,from,to));
	return age;
}
void PrintAge(int age){
	cout << "ur age " << age << " is valid\n";

}

int main() {
	PrintAge(ReadInRange(18,45));
}
