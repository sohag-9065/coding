#include<stdio.h>
#include<string.h>
#include<math.h>

#define maxm 1010

int n;

int is_lucky(int n)
{
    printf("%d\n\n",n);
    while(n)
    {
        if(n%10!=4 && n%10!=7) return 0;
        n/=10;
    }
    printf("ssss\n");
    return 1;

}

int main()
{

    int i,j,k,l,test,t=1;

    //freopen("in.txt","r",stdin);

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(!is_lucky(i)) continue;
        if((n%i)==0)
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");


    return 0;
}
