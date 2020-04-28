
#include <stdio.h>


int main()
{
    char  ch[1000];
     scanf("%s",ch);

      int i,p=0,q=0,r=0;
     for(i=0;ch[i];i++)
     {
         if(ch[i]=='0')
         {
             p++;
             q=0;
         }
         else
         {
             q++;
             p=0;
         }
         if(p==7||q==7)
         {
             r=1;
             break;
         }
     }
     if(r==1)printf("YES\n");
     else printf("NO\n");
    return 0;
}
