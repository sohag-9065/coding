#include<stdio.h>
int main(void)
{
    int n,ans=0;
    char ch[4];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",ch);
        if((ch[1]=='+'))
        {
            ans++;
        }
        else
        {
            ans--;
        }
    }
    printf("%d\n",ans);
    return 0;
}
