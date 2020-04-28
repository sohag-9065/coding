
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,k,p,c=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p>>k;
        if(k-p>1)
        {
            c++;
        }

    }
    cout<<c<<endl;
    return 0;
}

