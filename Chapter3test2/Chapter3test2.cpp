#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
	//Variables
	float weight;
	float r;
	double Fb;
	double V;
	double y;
	//User input
	cout << "Enter the radius of the sphere, in feet: ";
	cin >> r;
	cout << "Enter the weight of the sphere, in pounds: ";
	cin >> weight;
	//Compute  buoyant force
	y = 62.4;
	V = (4 / 3) * (M_PI) * (pow(r, 3));
	Fb = (V) * (y);

	//Output
	if (Fb >= weight)
		cout << "The sphere will float\n";
	else
		cout << "The sphere will sink\n";
	return 0;
}