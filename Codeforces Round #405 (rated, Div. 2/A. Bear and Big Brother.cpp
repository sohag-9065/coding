
#include <bits/stdc++.h>
using namespace std;
int main()
{


    int n ,m,y=0;
    cin >> n >> m;
    while(1)
    {
        if(n>m)
        {
            cout << y<<"\n";
            break;
        }
        n = n*3;
        m = m*2;
        y++;
    }

    return 0;
}
