/*
abs() and fabs () functions, both are used to retrieve or calculate the absolute value.
only difference between both of them is, abs() is used to calculate
the absolute value for integer type numbers
whereas fabs() are used for floating type numbers.

abs() function is use under the library file <stdlib.h> and
fabs() function is use under the library file <math.h>.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x=  -101 ;
    double result;

    result =  abs(x);
    cout << "abs(" << x << ") = |" << x << "| = " << result << endl;
    double r=  -101.3;
    double result1;

    result1 =  fabs(r);
    cout << "abs(" << r << ") = |" << r << "| = " << result1 << endl;

    return 0;
}
