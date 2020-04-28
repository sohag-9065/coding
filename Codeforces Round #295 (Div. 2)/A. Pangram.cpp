 #include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,c=1;
    string str;;
    cin >> n  >> str ;
    for(int i=0; i<n; i++)
        str[i]=toupper(str[i] );
    sort(str.begin(), str.end());

    for(int i=0;i<n-1;i++)
    {
        if(  str[i] <  str[i+1]  )
        {
            c++;

        }

    }
    if(c==26)cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
