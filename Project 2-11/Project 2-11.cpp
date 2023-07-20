// program start
#include <iostream>
using namespace std;

int main()
{
	// initialization of variables
	int start;
	int end;
	double velocity;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);


	// output and input statements for equation
	cout << "Enter the starting temperature, in degrees Celsius: ";
	cin >> start;

	cout << "Enter the ending temperature, in degrees Celsius: ";
	cin >> end;

	// loop
	while (start <= end)
	{
		velocity = 331.3 + 0.61 * start;

		cout << "At " << start
			<< " degrees Celsius the velocity of sound is "
			<< velocity << " m/s" << endl;

		start++;
	}

	return 0;
}