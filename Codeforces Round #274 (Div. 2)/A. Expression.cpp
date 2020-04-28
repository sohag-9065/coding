#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int a,b,c,ans=0;
    cin>>a>>b>>c;
    if(a==1)
    {
        if( c==1)
        {
            ans=a+b+c;
        }
        else
        {
            ans=(a+b)*c;
        }
    }
    else if(b==1)
    {
        if(a>c)
        {
            ans=a*(b+c);
        }
        else
        {
            ans=(a+b)*c;
        }
    }
    else if(c==1)
    {
        ans=a*(b+c);
    }
    else ans=a*b*c;

    cout << ans << endl;
    return 0;

}


