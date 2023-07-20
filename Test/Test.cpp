#include <iostream>
using namespace std;
int main() {

	int quarters, dimes, nickles, cents;

	cout << "Enter number of quarters, then dims, then nickels:";
	cin >> quarters;
	cin >> dimes;
	cin >> nickles;
	cents = quarters + dimes + nickles;
	cout << "if you have ";
	cout << "quarters: ";
	cout << quarters;
	cout << " dimes: ";
	cout << dimes;
	cout << " nickles: ";
	cout << nickles;
	cout << " you have ";
	cout << cents;
	cout << " cents";
	return 0;

}