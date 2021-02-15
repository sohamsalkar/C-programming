/*
1       i=1
22      i=2
333     i=3
4444    i=4

1 2 3
2 4 6
3 6 9
*/

#include <stdio.h>
int main()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}