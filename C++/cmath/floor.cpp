#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = 10.25, result;
    result = floor(x);
    cout << "Floor of " << x << " = " << result << endl;

    x = -34.251;
    result = floor(x);
    cout << "Floor of " << x << " = " << result << endl;

    x = 0.71;
    result = floor(x);
    cout << "Floor of " << x << " = " << result << endl;

    return 0;
}
