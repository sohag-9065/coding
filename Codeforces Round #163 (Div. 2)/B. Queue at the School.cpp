
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    cin >> n>> m;
    string mystring;
    cin >>  mystring;

    while(m--)
    {
        for(int i=0; i<n; i++)
        {
            if(mystring[i]=='B'&& mystring[i+1]=='G')
            {
                mystring[i]='G';
                mystring[i+1]='B';
                i++;
            }
        }
    }

    cout << mystring <<"\n";
    return 0;
}
