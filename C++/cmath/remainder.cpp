#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = 7 , y = 5;
    double result = remainder(x, y);
    cout << "Remainder of " << x << "/" << y << " = " << result << endl;

    x = -17.50, y=2.0;
    result = remainder(x, y);
    cout << "Remainder of " << x << "/" << y << " = " << result << endl;

    y=0;
    result = remainder(x, y);
    cout << "Remainder of " << x << "/" << y << " = " << result << endl;

    return 0;
}
