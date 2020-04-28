#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string c_word;
    bool all_upp=true;
    cin>>c_word;
    for  (int i=1; i<c_word.size(); i++)
    {

        if (c_word[i]>=97)
        {
            all_upp=false;
            break;
        }
    }

    if (c_word[0]>=97&&all_upp)
    {
        if (c_word[0]>=97&&c_word[0]<=122)
            c_word[0]-=32;
        for (int i=1; i<c_word.size(); i++)
        {
            if (c_word[i]<91&&c_word[i]>=65)
                c_word[i]+=32;
        }
        cout<<c_word<<endl;

        return 0;
    }
    else if (c_word[0]<97&&all_upp)
    {
        for (int i=0; i<c_word.size(); i++)
        {
            if (c_word[i]<91&&c_word[i]>=65)
                c_word[i]+=32;
        }

        cout<<c_word<<endl;
        return 0;
    }
    else
    {
        cout<<c_word<<endl;
        return 0;
    }

    return 0;
}
