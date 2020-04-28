

#include<bits/stdc++.h>
using namespace std;
int arh[40];
int ar[40];
int main(void)
{

    int n,sum=0,x,y ;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arh[i] >> ar[i]  ;
    }
    sort(arh,arh+n);
    sort(ar,ar+n);


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
             if(arh[i] == ar[j])
             {
                 sum++;

             }

        }
    }

    cout << sum << endl;
    return 0;
}
