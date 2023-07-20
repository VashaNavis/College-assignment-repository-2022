// Start of program
#include <iostream>

using namespace std;

int main()

{

	//Variables

	double weight, radius, Fb;

	//User input

	cout << "Enter the radius of the sphere, in feet: ";

	cin >> radius;

	cout << "Enter the weight of the sphere, in pounds: ";

	cin >> weight;

	//Compute buoyant force

	Fb = 62.4 * 4 * 3.141 * radius * radius * radius / 3;

	//Output

	if (Fb >= weight)

		cout << "The sphere will float.\n";
	else cout << "The sphere will sink.\n";

}
// End of program