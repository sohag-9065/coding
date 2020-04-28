#include <iostream>
#include <cmath>
#include <cfloat>
using namespace std;

int main ()
{
	long int n = 4;
	double x = 3 , result;
	result = scalbln (x, n);
	cout << x << " * " << FLT_RADIX << "^" << n << " = " << result << endl;

	return 0;
}
