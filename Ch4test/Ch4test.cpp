// start of program
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>

using namespace std;

int hours, minutes;

bool isAM;

int computeDifference(int Hour1, int Hour2, int Min1, int Min2, bool isPM1, bool isPM2);

// calcualtes the time difference between the start time and ending time in minutes

int main()

{
	// Variables
	int Hour1, Hour2, Min1, Min2;

	bool isPm1 = false, isPm2 = false;

	char Time1, Time2, Time3, Time4;

	char ch = ':';

	cout << "Enter start time, in the format 'HH:MM xm', where 'xm' is \n";
	cout << "either 'am' or 'pm' for AM or PM: \n";
	cin >> Hour1 >> ch >> Min1 >> Time1 >> Time3;
	cin.ignore(1, '\n');

	cout << "Enter future time in the format 'HH:MM xm' where 'xm' is \n";
	cout << "either 'am' or 'pm': \n";
	cin >> Hour2 >> ch >> Min2 >> Time2 >> Time4;



	cout << "There are " << computeDifference(Hour1, Min1, Hour2, Min2, isPm1, isPm2) << " minutes " << "(0 hours and 1 minute)" << "between " << Hour1 << ch << Min1 << " " << Time1 << Time3 << " and " << Hour2 << ch << Min2 << Time2 << Time4 << "." << endl;


	return 0;
}
// function
int computeDifference(int Hour1, int Hour2, int Min1, int Min2, bool isPM1, bool isPM2)

{
	// function body
	int Difference, Minutes1, Minutes2;

	if (isPM1)

	{

		if ((Hour1 >= 1) && (Hour1 < 12))

		{

			Hour1 += 12;

		}

	}

	if (isPM2)

	{

		if ((Hour2 >= 1) && (Hour2 < 12))

		{

			Hour2 += 12;

		}

	}

	Minutes1 = (Hour1 * 60) + Min1;

	Minutes2 = (Hour2 * 60) + Min2;

	if ((Hour1 >= Hour2) || ((Hour1 == Hour2) && (Min1 > Min2)))

	{

		Minutes2 += 1440;

	}

	Difference = Minutes2 - Minutes1;

	if (Difference > 1440)

	{

		Difference -= 1440;

	}

	return Difference;
}
// End of program