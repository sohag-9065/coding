#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    while(n--)
    {
        int x,p,q,a,b,c=0;
        cin >>x;
        cin >> p>>q;
        if( q>p)
        {
            c=1;
        }

        x=x-1;
        while(x--)
        {
            //cout << p<< " sdfg " << q << endl;
            cin >> a>>b;
            if(p>a||q>b)
            {
                c=1;
                //cout << "YES" << endl;
            }
            else if(b>q && p>=a)
            {
                c=1;
                //cout << p<< a << endl;
            }
            else
            {
                  //cout << "YES" << endl;
                p=a;
                q=b;
            }
        }
        if( q>p)
        {
            cout << "NO" << endl;
            continue;
        }

        else  if(c==1)cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
