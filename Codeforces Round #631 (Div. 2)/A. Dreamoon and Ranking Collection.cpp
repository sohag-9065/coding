#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,n,x,k,ans;
    bool ar[210];
    cin>>t;

    while (t--)
    {
        for (int i=1; i<=200; i++)
        {
             ar[i]=false;
        }
        cin>>n>>x;

        for (int i=1; i<=n; i++)
        {
            cin>>k;
            ar[k]=true;
        }
        ans=0;
        for (int i=1; i<=300&&x>=0; i++)
        {
            if (!ar[i]) x--;
            ans=i;
        }
        cout<<ans-1<<endl;
    }
    return 0;
}
