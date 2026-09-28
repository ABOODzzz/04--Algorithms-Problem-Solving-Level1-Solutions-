#include<iostream>

using namespace std;

int ReadHours() {
	int hour=0;
	do {
		cout << "enter how many hours :  "; cin >> hour; cout << endl;
	} while (hour <= 0);
	return hour;
}

float ConvertFromH_to_Days(int hour) {
	return float(hour) / 24;
}
float ConvertFromH_to_weeks(int hour) {
	return float(hour) / (24*7);
}
void Print_ConvertFromH_to_weeks(float result) {
	cout << "\nweeks : " << result << endl;
}
void Print_ConvertFromH_to_Days(float result) {
	cout << "\nDays : " << result<<endl;
}

int main() {
	int hour = ReadHours();
	Print_ConvertFromH_to_Days(ConvertFromH_to_Days(hour));
	Print_ConvertFromH_to_weeks(ConvertFromH_to_weeks(hour));
}
