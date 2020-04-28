#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = 523454 , result;
    int y = 89;

    result = fmin(x, y);
    cout << "fmin(x, y) = " << result << endl;

    return 0;
}
