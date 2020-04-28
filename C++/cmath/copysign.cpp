#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = 34.15, y =  -13.0, result;

    result = copysign(  y,x);
    cout << "copysign(" << x << "," << y << ") = " << result << endl;

    return 0;
}
