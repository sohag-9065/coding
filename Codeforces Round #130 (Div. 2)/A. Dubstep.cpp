#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int c=0,p=6,l;
    string str;
    cin >> str;
    for(int i=0;str[i];i++)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            i=i+2;
            c=5;
        }
        else
        {
            if(c==5 && p==0)cout << " ";
            cout << str[i]  ;
            p=0;
            c=0;
        }
    }
    cout << endl;
}
