
#include <iostream>
#include <cmath>
//#include <cfenv>
using namespace std;

int main()
{
    // by default, rounding direction is to-nearest i.e. fesetround(FE_TONEAREST)
    double x = 11.87, result;
    result = rint(x);
    cout << "Rounding to-nearest (" << x << ") = " << result << endl;

    // upper value is taken for mid-way values
    x = 11.5;
    result = rint(x);
    cout << "Rounding to-nearest (" << x << ") = " << result << endl;

    // setting rounding direction to DOWNWARD
   // fesetround(FE_DOWNWARD);
    x = 11.87;
    result = rint(x);
    cout << "Rounding downward (" << x << ") = " << result << endl;

    // setting rounding direction to UPWARD
    //fesetround(FE_UPWARD);
    x = 33.32;
    result = rint(x);
    cout << "Rounding upward (" << x << ") = " << result << endl;

    return 0;
}
