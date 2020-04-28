
#include <bits/stdc++.h>
using namespace std;
#define size 100010

int main()
{

    int arr[size],n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i] ;
    }
    int ans=0,j=0;
    sort(arr, arr+n);

    for(int i=n-1; i>=j; i--)
    {
        int now=arr[i];
        while(j<i&&arr[j]+now<=4)
        {
            now+=arr[j];
            j++;
        }
        ans++;
    }
    cout << ans << endl;
    //for (int i = 0; i < n; ++i)
    // cout << arr[i] << " ";

    return 0;
}
