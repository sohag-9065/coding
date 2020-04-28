
#include<stdio.h>
int main(void)
{
    int a,b,i,sum=0,n,max=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        scanf("%d %d",&a,&b);
        sum=sum-a;
        sum=sum+b;


        if(max<sum)
        {
            max=sum;
        }
    }
    printf("%d\n",max);
    return 0;
}
