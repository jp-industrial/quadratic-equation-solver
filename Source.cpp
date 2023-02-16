#include "c:\Users\james\Desktop\migrate\std_lib_facilities.h"
//program that takes roots of quadratic equation and returns x.

double root1(double a, double b, double c) //returns sum root.
{
	double sc = b * b - 4 * a * c; //precalculating before finding square root.
	if (sc < 0) error("x has no real roots.");

	double x = -b + sqrt(sc); //top half of fraction
	x /= (2 * a); //formula broken down for legibility.
	return x;
}

double root2(double a, double b, double c) //returns minus root.
{
	double sc = b * b - 4 * a * c; //precalculating before finding square root.
	if (sc < 0) error("x has no real roots.");

	double y = -b - sqrt(b * b - 4 * a * c);
	y /= (2 * a);
	return y;
}

int main()
{
	for (int a = 0, b = 0, c = 0; cin >> a >> b >> c;) {
		cout << "Root 1: " << root1(a, b, c) << "\n";
		cout << "Root 2: " << root2(a, b, c) << "\n";
	}
}