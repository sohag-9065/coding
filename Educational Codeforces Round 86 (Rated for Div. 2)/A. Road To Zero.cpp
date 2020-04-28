
#include<bits/stdc++.h>
using namespace std;
int main(void)
{

    long long int n,sum=0,a,b,x,y,k,rs,rk;
    cin >> n;
    while(n--)
    {
        cin >> x >>y >>a >>b ;
        if(x<y)
        {
           swap(x,y);
        }
        sum = (x-y)*a;
        k = x - (x-y);
        rs = k*(2*a);
        rk = k*b;
        if(rs>rk)swap(rs,rk);

        cout << sum+rs << endl;
        sum =0;
    }

    return 0;
}
