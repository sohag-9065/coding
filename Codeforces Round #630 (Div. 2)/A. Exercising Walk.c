
#include <bits/stdc++.h>
using namespace std;


int main()
{

    int n;
    cin >> n;
    while(n--)
    {
        int a,b,c,d,p,q;
        int x,x1,x2,y,y1,y2;
        cin >> a >> b >> c >> d;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        if(a<b)
        {
            int temp = a;
            a=b;
            b=temp;
        }
        if(c<d)
        {
            int temp = c;
            c=d;
            d=temp;
        }
        p=a-b;
        q=c-d;
        if((p>=x1 && p<=x2) && (q>=y1 && q<=y2))
        {
            cout <<"Yes"<<endl;
        }
        else
        {
            cout <<"No"<<endl;
        }
    }


    return 0;
}
