
#include<stdio.h>
int main(void)
{
    int n,k;
    scanf("%d %d",&n,&k);

    int i,p=k;
    int ar[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    if(ar[0]==0)
    {
        printf("0\n");
    }
    else if(ar[k-1]!=0)
    {
        if(ar[k]!=ar[k-1])
        {
            printf("%d\n",k);
        }
        else
        {
            for(i=k+1; i<n; i++)
            {
                if(ar[k]!=ar[i])
                {
                    break;
                }
                k++;
            }
            printf("%d\n",k+1);
        }
    }
    else
    {
        for(i=1; i<n; i++)
        {
            if(ar[i]==0)
            {
                printf("%d\n",i);
                break;
            }

        }
    }
    return 0;
}
