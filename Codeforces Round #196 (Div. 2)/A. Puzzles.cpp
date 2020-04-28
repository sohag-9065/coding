
#include<bits/stdc++.h>
using namespace std;
#define max 110
int main(void)
{
    int n,m,mx=0,sum=0;
    int arr[max];
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+m , greater<int>());
    /*for (int i = 0; i < m; ++i)
        cout << arr[i] << " ";*/
    mx = arr[0]-arr[n-1];

    //cout << mx << " ";
    for (int i = 1; i <= m-n; ++i)
    {

        sum = arr[i]-arr[i+n-1];
        if(mx>sum)mx=sum;
    }
    cout << mx << endl;

}
