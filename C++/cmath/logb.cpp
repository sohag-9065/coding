
#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	double result;
	int x =  128;

	result = logb (x);
	cout << "logb(" << x << ") = " << "log(|" << x << "|) = "<< result << endl;

	return 0;
}
