#include<iostream>

using namespace std;

struct stWorkingTime {
	int day, hour, minute, second;
};

stWorkingTime ReadInfos() {
	stWorkingTime duration;
	do {
		cout << "\nenter how many days: "; cin >> duration.day; cout << endl;
	} while(duration.day<=0);
	do {
		cout << "\nenter how many hours: "; cin >> duration.hour; cout << endl;
	} while (duration.hour <= 0);
	do {
		cout << "\nenter how many minuts: "; cin >> duration.minute; cout << endl;
	} while (duration.minute <= 0);
	do {
		cout << "\nenter how many days: "; cin >> duration.second; cout << endl;
	} while (duration.second <= 0);
	return duration;
}

float ConvertToSecond(stWorkingTime duration) {
	return duration.day * 24 * 60 * 60 + duration.hour * 60 * 60 + duration.minute * 60 + duration.second;
}
void PrintResult(float result) {
	cout << "\n\nthe result is :" << result << endl;;
}

int main() {
	PrintResult(ConvertToSecond(ReadInfos()));

}
