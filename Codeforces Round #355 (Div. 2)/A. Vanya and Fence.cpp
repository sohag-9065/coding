#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,w,c=0,k;
    cin>>n >>k;
    while(n--)
    {
        cin>> w;
        if(w>k)c+=2;
        else c++;
    }
    cout << c << endl;
    return 0;
}
