

#include<bits/stdc++.h>
using namespace std;
#define row 110
#define col 110
int main(void)
{
    int n,a,b,mx=0,sum=0;
    int k=0,p=0;
    int arr[row][col];
    // cin >> n ;
    //while(n--)
    //{
    cin >> a >>b ;
    for(int i=0; i<b; i++)
    {
        arr[i][0]=1;
        if(i%2==0)arr[0][i]=1;
        else arr[0][i]=0;
    }
    for(int i=1; i<a; i++)
    {
        k=0;
        p=0;
        for(int j=1; j<b; j++)
        {

            if(i%2==1)
            {

                if(k==2)
                {
                    arr[i][j]=1;
                    //cout << k << endl;
                    k=0;

                }
                else
                {
                    arr[i][j]=0;
                    k++;
                    //cout << k<< endl;
                }
            }
            else
            {
                if(p==1)
                {
                    arr[i][j]=1;
                    //cout << k << endl;
                    p=0;

                }
                else
                {
                    arr[i][j]=0;
                    p3++;
                    //cout << k<< endl;
                }
            }

        }
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }


    //  }
    /*for(int i=0; i<m; i++)
    {
        cin >> arr[i];
    }*/


}
