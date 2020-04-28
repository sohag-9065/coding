
#include <bits/stdc++.h>
using namespace std;



int main()
{
    string str;
    cin >> str;
    int c=0;
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] > 'Z' )c=1;
    }
    if(c==0)
    {
        cout << str<< endl;
        return 0;
    }
    if (str[0] > 'Z' )str[0]=str[0]-32;
    for (int i = 1; i < str.size(); i++)
    {
        if (str[i] < 'a' )str[i]=str[i]+32;
    }
    cout << str<< endl;
    return 0;
}
