
#include <stdio.h>
int main()
{
    char ch,p;
    int n,c=0;
     scanf("%d",&n);
     scanf(" %c",&ch);
     n--;
     while(n--)
     {
         scanf(" %c",&p);
         if(ch==p)c++;
         else ch=p;
     }
     printf("%d\n",c);
     return 0;
}
