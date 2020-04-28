#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,x,mx=0,mn=0;
    int arr[200],ar[200];
    cin>> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        ar[i]=x;
        arr[i]=x;
    }
    sort(ar,ar+n);
    mx=ar[n-1];
    mn=ar[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]==mx)
        {
            mx=i;
            break;
        }
    }
    reverse(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        if(arr[i]==mn)
        {
            mn=i;
            break;
        }
    }
    if(mx+mn>=n)cout << mx+mn-1 <<endl;
    else cout << mx+mn <<endl;

    return 0;
}
