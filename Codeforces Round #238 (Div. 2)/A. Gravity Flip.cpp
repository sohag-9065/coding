

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n ,arr[200];
    cin >>n;

    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    sort(arr,arr+n);
    cout << arr[0];
    for(int i=1;i<n;i++)
    {
        cout << " "<< arr[i];
    }
    cout << endl;
    return 0;
}
