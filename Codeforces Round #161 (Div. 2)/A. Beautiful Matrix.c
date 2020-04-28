#include<stdio.h>
int main(void)
{
    int i,j,n,p,q;
    for(i=1; i<6; i++)
    {
        for(j=1; j<6; j++)
        {
            scanf("%d",&n);
            if(n==0)continue;
            else
            {
                if(i>3)p=i-3;
                else p=3-i;
                if(j>3)q=j-3;
                else q=3-j;
            }

        }
    }
    printf("%d\n",p+q);
}
