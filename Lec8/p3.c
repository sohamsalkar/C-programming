/*
1       i=1
12      i=2
123     i=3
1234    i=4
*/

#include <stdio.h>
int main()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}