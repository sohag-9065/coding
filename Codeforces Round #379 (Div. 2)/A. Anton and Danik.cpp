
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string str;
    int i,n,a=0,d=0;
    cin>>n;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='A')a++;
        else d++;
    }
    if(a==d)cout << "Friendship"<<endl ;
    else if(a>d)cout<< "Anton" <<endl ;
    else cout<< "Danik"<< endl;
    return 0;
}
