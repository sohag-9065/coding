
#include <iostream>
#include <cmath>
#include <cfloat>
using namespace std;

int main ()
{
	int n = 13;
	double x = 3.056, result;

	result = scalbn (x, n);
	cout << x << " * " << FLT_RADIX << "^" << n << " = " << result << endl;

	return 0;
}
