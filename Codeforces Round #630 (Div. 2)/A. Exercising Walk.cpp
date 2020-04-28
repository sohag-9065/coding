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

        p=x+(b-a);
        q=y+(d-c);


       if(((a>0)&&(x2==x1)) || ((b>0)&&(x1==x2) ) || ((c>0)&&(y2==y1) )|| ((d>0)&&(y1==y2) ))
        {
            cout <<"No"<<endl;
            continue;
        }

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
