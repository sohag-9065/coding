#include <stdio.h>
#include <string.h>
void insort(int n);
int array[120];
int main()
{
    char  ch[1000];
     scanf("%s",ch);
    // printf("%d",ch[0]-48);
     int n=strlen(ch),i,k=0;
     for(i=0;i<n;i+=2)
     {
         array[k]=ch[i]-48;
         k++;
     }
     insort( k);
    return 0;
}
void insort(int n)
{
    int  c, d, position, t;

    for (c = 0; c < (n - 1); c++) // finding minimum element (n-1) times
    {
        position = c;

        for (d = c + 1; d < n; d++)
        {
            if (array[position] > array[d])
                position = d;
        }
        if (position != c)
        {
            t = array[c];
            array[c] = array[position];
            array[position] = t;
        }
    }
    printf("%d", array[0]);
    for (c = 1; c < n-1; c++)
    {
        printf("+%d", array[c]);
    }
    if(n>1)
    {
        printf("+%d\n", array[c]);
    }
    else
    {
       printf("\n");
    }


}

