
#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	double x = 16, result;

	result = log2(x);
	cout << "log2(x) = " << result << endl;

	x = -3.591;
	result = log2(x);
	cout << "log2(x) = " << result << endl;

	return 0;
}
