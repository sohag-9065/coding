#include<stdio.h>
int main(void)
{
    int ar[]= {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n,k=0,p=14;

    scanf("%d",&n);
    while(p--)
    {
        if(ar[k]==n)
        {
            printf("YES\n");
            return 0;
        }

        if(n%ar[k]==0||n%ar[k]==0)
        {
            printf("YES\n");
            return 0;
        }
        k++;
    }
        printf("NO\n");
    return 0;
}
