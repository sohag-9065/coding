#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int a[120];
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin>>x;
        a[x] = i;
    }

    for (int i = 1; i <= n; i++)cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
