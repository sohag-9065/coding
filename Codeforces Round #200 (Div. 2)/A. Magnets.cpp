#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,ab=5,mx=0;
    string str;
    cin >> n;
    while(n--)
    {
        cin >> str;
        if(str[0]=='1' && ab!=1)
        {
            ab=1;
            mx++;
        }
        else if(str[0]=='0' &&ab!=0)
        {
            mx++;
            ab=0;
        }
    }
    cout << mx << endl;
    return 0;
}
