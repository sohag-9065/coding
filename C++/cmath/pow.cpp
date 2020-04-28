
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	long double base = 4.4, result;
	int exponent = -3;
	result = pow(base, exponent);
	cout << base << "^" << exponent << " = " << result << endl;


	// Both arguments int
	// pow() returns double in this case
	int intBase = -4, intExponent = 6;
	double answer =5.0001;
	//answer = pow(intBase, intExponent);
	cout << intBase << "^" << intExponent << " = " << answer;

	return 0;
}
