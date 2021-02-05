/*
i=1
    j=1
    sum=0
    sum=1 , j=2
    2 <= 1 
    1 1
i=2
    j=1
    sum=0
    sum=1, j=2
    2 <= 2
    sum=3 , j=3
    3 <= 2 
    2 3
i = 3
    j=1
    sum = 0
    sum=1, j=2
    2 <= 2
    sum=3 , j=3
    3 <= 3
    sum= 6 , j=4
    4 <= 3
    3 6
*/
#include <stdio.h>
int main()
{
    int i, j;
    int sum;
    for (i = 1; i < 4; i++)
    {
        j = 1;
        sum = 0;
        do
        {
            sum += j++;

        } while (j <= i);
        printf("%d \t %d \t %d \n", i, sum, j);
    }
    return 0;
}
