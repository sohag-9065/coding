
#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int x,k,i,c=1,mx=1;
    scanf("%d",&x);
    k=x;
    for(i=2; i<=n; i++)
    {
        scanf("%d",&x);
        if(k<=x)
        {
            c++;
        }
        else
        {
            c=1;
        }
        if(c>mx)mx=c;
        k=x;
    }


    printf("%d\n",mx);
    return 0;
}
