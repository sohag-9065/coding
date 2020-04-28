#include<stdio.h>
int main(void)
{
    char str[110];
    char ch[]="hello";
    int n =0 ,k=0;
    scanf(" %s",str);
    while(str[n])
    {
        if(str[n]==ch[k])k++;

        n++;
    }
    if(k==5)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
