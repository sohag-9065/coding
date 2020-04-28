
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,k,p;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>p>>k;
        if(k-p>1)
        {
            cout<<i<<endl;
        }

    }
    cout<<n<<endl;
    return 0;
}
