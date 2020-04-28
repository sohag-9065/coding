
#include<stdio.h>
int main(void)
{
    long long int n,i,j,sum=0,mx=0,x,mxn=0,k=0,r=0;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
        r+=a[i];
    }
    r=r/2;
    mx=a[0];
    for(i=0; i<n-1; i++)
    {
        sum=0;
        x=a[i];
        if(a[i]==0)continue;
        k=i;
        for(j=i+1; j<n; j++)
        {
            //printf("%d\n",a[i]);
            if(mx<a[j])mx=a[j];
            if((a[j]-x)==(j-k))
            {
                if(sum==0)
                {
                    sum=x+a[j];
                    k=j;
                }
                else
                {
                   sum+=a[j];
                    k=j;
                }
                x=a[j];
                a[j]=0;
            }
        }
        if(mxn<sum)mxn=sum;
        if(mxn>r)break;;
    }
    if(mx<mxn)mx=mxn;
    printf("%lld\n",mx);
    return 0;
}

