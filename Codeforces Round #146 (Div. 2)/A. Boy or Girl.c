#include<stdio.h>
#include<string.h>

int main(void)
{
    char  ch[1000];
    scanf("%s",ch);
    int n=strlen(ch) ;
    if(n%2==0)printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n");
    return 0;
}
