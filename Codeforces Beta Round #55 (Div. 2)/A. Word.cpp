
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string str;
    int c=0;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>94)c++;
    }
    if(str.size()/2.0>c)
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
         cout<<str<<endl;

    }
    else
    {

        transform(str.begin(), str.end(), str.begin(), ::tolower);
         cout<<str<<endl;
    }
    return 0;
}
