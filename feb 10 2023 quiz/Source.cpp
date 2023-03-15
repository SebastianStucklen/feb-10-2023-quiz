#include <iostream>
using namespace std;
int countingBy5 = 3;
char DONUT = 'y';
int radius;
float Circumference(int radius);
int main() {
	while (countingBy5 < 34) {
		cout << countingBy5 << " " << endl;
		countingBy5 += 5;
	}
	cout << endl << endl;
	while (DONUT == 'y') {
		cout << "DONUT! say y for another donut" << endl;
		cin >> DONUT;
		cout << endl;
	}
	cout << "GOODBYE" << endl << endl;
	char DONUT = 'y';
	do {
		cout << "DONUT! say y for another donut" << endl;
		cin >> DONUT;
		cout << endl;
	} while (DONUT == 'y');
	//dont know whats wrong with the function
	while (radius != -5) {
		cout << "type in a circles radius" << endl;
		cin >> radius;
		Circumference(radius);
		cout << Circumference << endl;
	}
	cout << "test" << endl;
}
float Circumference(int radius) {
	return 2 * 3.14 * radius;
}