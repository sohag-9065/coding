

#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(void)
{
    LL n,m,k;

    cin >> n >> m;




    if(n%2== 1  )
    {
        if((n/2)+1>=m )
        {
            cout << m*2-1 << endl;
        }
        else
        {
            k=m-((n/2)+1);
            cout << k*2 << endl ;
        }
    }
    else
    {
        if((n/2) >=m )
        {
            cout << m*2-1 << endl  ;
        }
        else
        {
            k=m-(n/2);
            cout << k*2 << endl;
        }
    }


    return 0;
}
