
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // by default, rounding direction is to-nearest i.e. fesetround(FE_TONEAREST)
    double x = 11.87, result;
    result = nearbyint(x);
    cout << "Rounding to-nearest (" << x << ") = " << result << endl;

    // upper value is taken for mid-way values
    x = -11.7;
    result = nearbyint(x);
    cout << "Rounding to-nearest (" << x << ") = " << result << endl;

    // setting rounding direction to DOWNWARD
    x = 17.87;
    result = nearbyint(x);
    cout << "Rounding downward (" << x << ") = " << nearbyint(x) << endl;

    // setting rounding direction to UPWARD
    x = 33.34;
    result = nearbyint(x);
    cout << "Rounding upward (" << x << ") = " << result << endl;
}
