

#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int i,c=0;
    for(i=1; i<=n; i++)
    {
        int m,j=0;
        char x;
        scanf("%d",&m);
        char str1[m+5],str2[m+5];
        for(j=0; j<m; j++)
        {
            scanf(" %c",&x);
            if(x=='0')
            {
                str1[j]='0';
                str2[j]='0';
            }
            else if(x=='1')
            {
                str1[j]='0';
                str2[j]='1';
            }
            else if(x=='2')
            {
                str1[j]='1';
                str2[j]='1';
            }
        }
        str1[j]='\0';
        str2[j]='\0';
        printf("%s\n",str1);
        printf("%s\n",str2);
    }



    return 0;
}
