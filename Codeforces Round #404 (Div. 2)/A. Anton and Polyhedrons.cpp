#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string str;
    int n,sum=0;
    cin >> n;
    while(n--)
    {
        cin >> str ;
        if(str[0]=='T')
        {
            sum+=4;
        }
        else if(str[0]=='C')
        {
            sum+=6;
        }
        else if(str[0]=='O')
        {
            sum+=8;
        }
        else if(str[0]=='D')
        {
            sum+=12;
        }
        else if(str[0]=='I')
        {
            sum+=20;
        }

    }
    cout << sum << endl;
    return 0;
}
