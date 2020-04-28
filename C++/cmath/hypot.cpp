#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x = 4, y = 3, result;
	result = hypot(x, y);
	cout << "hypot(x, y) = " << result << endl;

	long double yLD, resultLD;
	x = 3.52;
	yLD = 5.232342323;

	// hypot() returns long double in this case
	resultLD = hypot(x, yLD);
	cout << "hypot(x, yLD) = " << resultLD;

	return 0;
}
