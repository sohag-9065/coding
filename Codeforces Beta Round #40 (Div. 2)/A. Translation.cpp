
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str,str1;
    cin >> str >>str1;
    int c=0;

    if(str.size()!=str1.size())
    {
        cout << "NO"<< endl;
        return 0;
    }
    else
    {
        for (int i = 0,j=str.size()-1; i < str.size(); i++,j--)
        {
            if(str[i]!= str1[j] )
            {
                cout << "NO"<< endl;
                return 0;
            }
        }
    }

    cout << "YES"<< endl;
    return 0;
}
