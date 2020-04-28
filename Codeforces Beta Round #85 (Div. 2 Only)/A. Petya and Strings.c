
#include<stdio.h>
int main(void)
{
    int i=0;
    char ch[11000],cf[11000];
    scanf("%s",ch);
    scanf("%s",cf);
    while(ch[i])
    {
        if(ch[i]>='A' && ch[i]<='Z')
        {
            ch[i]=ch[i]+32;
        }
        if(cf[i]>='A' && cf[i]<='Z')
        {
            cf[i]=cf[i]+32;
        }
        if(ch[i]<cf[i])
        {
           printf("-1\n");
           return 0;
        }
         if(ch[i]>  cf[i])
        {
            printf("1\n");
            return 0;
        }
        i++;
    }
    printf("0\n");
    return 0;
}
