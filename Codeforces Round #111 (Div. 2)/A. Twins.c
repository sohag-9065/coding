
#include <stdio.h>
int main()
{
    int array[110], n, c, d, position, t,sum=0,p=0;
    float k=0;

    scanf("%d", &n);
    for (c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
        sum+=array[c];
    }


    for (c = 0; c < (n - 1); c++)
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
    k=(float)sum/2.0;
    for (c =n-1; c>=0; c--)
    {
         p+=array[c];
         if(p>k)
         {
             printf("%d\n",n-c);
             return 0;
         }
    }


    return 0;
}
