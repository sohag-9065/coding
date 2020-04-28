#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,k,p;
    cin>>n>>k;
    while(k&&n!=0)
    {
        if(n%10!=0)
        {
            n--;
        }
        else
        {
            n/=10;
        }
        k--;

    }
    cout<<n<<endl;
    return 0;
}
