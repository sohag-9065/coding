
#include<stdio.h>
int main(void)
{
    int a,b,ans=0,p,q;
    scanf("%d %d",&a,&b);
    if(a/2>=1)
    {
        p=a/2;
        ans=p*b;
    }
    if(a%2!=0)
    {
        p=b/2;
        ans+=p;
    }
    printf("%d\n",ans);
    return 0;
}
