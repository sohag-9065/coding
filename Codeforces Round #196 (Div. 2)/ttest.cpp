#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4,k=1;

    for(int i=1; i<=n; i++)
    {
        if(i%2==1)k=0;
        else k=1;
        for(int j=1; j<=n; j++)
        {
             if(k==0)
             {
                 cout<<"B";
                 k=1;
             }
             else
             {
                 cout<<"W";
                 k=0;
             }
        }
        cout<<"\n";
    }
    return 0;
}
