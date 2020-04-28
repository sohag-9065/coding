#include<bits/stdc++.h>
using namespace std;
int arr[200];
int main(void)
{
    int n,k,x;
    cin>>n>>k;

    int b;

    for(int i=1; i<=k; i++)
    {
        cin>>x;
        arr[x]=1;
    }
     cin >>b;
    for(int i=1; i<=b; i++)
    {
        cin>>x;
        arr[x]=1;
    }
    for(int i=1; i<=n; i++)
    {
        if(arr[i]==0)
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}
