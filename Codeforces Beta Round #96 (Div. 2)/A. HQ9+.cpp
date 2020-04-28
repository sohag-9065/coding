

#include <bits/stdc++.h>
using namespace std;
int main()
{

    string mystring;
    cin >>  mystring;
    int n = mystring.size();

    for(int i=0;i<n;i++)
    {
        if(mystring[i]=='H'||mystring[i]=='Q'||mystring[i]=='9')
        {
            cout << "YES"<<"\n";
            return 0;
        }
    }
    cout << "NO"<<"\n";
    return 0;
}
