#include<bits/stdc++.h>
using namespace std;
int arr[200];
int main(void)
{
    string st,sk;
    int j=0,i ;
    getline(cin , st);
     for(i=0;st[i] != '\0';i++)
    {
        if(st[i]>='a' && st[i]<='z')
        {
            j=st[i];
            arr[j]=1;

        }

    }
    int c=0;
    for(i=97;i<=122;i++)
    {
        if(arr[i]==1)
        {
            c++;
        }
    }

    cout << c<< endl;
}
