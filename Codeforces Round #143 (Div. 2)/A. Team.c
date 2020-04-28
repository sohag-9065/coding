#include<stdio.h>
int main(void)
{
    int n,a,b,c ,ans=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&a,&b);

         ans=a%b;
         c=b-ans;
         printf("%d\n",c);
    }

    return 0;
}
