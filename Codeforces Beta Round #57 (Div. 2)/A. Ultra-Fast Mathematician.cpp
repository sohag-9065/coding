#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int c=0,p=6,l;
    string str,str2;
    cin >> str >>str2;
    for(int i=0;str[i];i++)
    {
        if(str[i]!=str2[i])
        {
             cout << "1"  ;
        }
        else
        {
            cout << "0"  ;
        }
    }
    cout << endl;
}

