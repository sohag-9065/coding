
#include <bits/stdc++.h>
using namespace std;
int main()
{


    int n ,ans=0;
    cin >> n;
    ans = n/5;
    if(n%5==0)cout << ans<<"\n";
    else cout << ans+1<<"\n";

    return 0;
}
