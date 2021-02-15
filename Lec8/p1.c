/*

for i= 1 to 10
{ 
    for j= 1 to 10
    { 
        statements (x100)
    }
}

1 2 3 jxi
1 2 3 jxi
1 2 3 jxi
*/

#include <stdio.h>
int main()
{
    int i, j;

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}