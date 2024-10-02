#include <iostream>
#include <cmath>

using namespace std;
double h(const double x, const double y); // прототип
int main()
{
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double d = (h(s, t * t) + h(t, 1 + pow (s, 2))) / (1 + h(s*t, 1));
	cout << "d = " << d << endl;
	return 0;
}
double h(const double x, const double y) // визначення
{
	return (pow(x, 2) + sin(x*y) + pow(y, 2)) /  (1 + pow(x, 2) + pow(y, 2));
}
////////////////////////////////////////////////////////////////////
