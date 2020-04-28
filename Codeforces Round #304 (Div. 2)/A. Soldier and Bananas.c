#include<stdio.h>
int main(void)
{
    int a,b,c,i,sum=0;
    scanf("%d %d %d",&a,&b,&c);
    for(i=1;i<=c;i++)
    {
        sum+=i*a;
    }
    if(sum>b)printf("%d\n",sum-b);
    else printf("0\n");
    return 0;
}
