#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int arr[10],c=0;;
    for(int i=0;i<4;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+4);
    for(int i=0;i<4-1;i++)
    {
         if(arr[i]==arr[i+1])c++;
    }
    cout << c<< endl;
    return  0;
}
