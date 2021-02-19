#include <stdio.h>
int main()
{
    int i;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //size n=10
    for (i = 0; i < 5; i++)                      // 0 to n-1
    {
        printf("array a[%d] =  %d \n", i, a[0]);
    }

    return 0;
}

/* 
6 bytes  int a[6] pointers
|       |       |      |        |       |       |       |
1001     1002   1003    1004    1005     1006
&a

*/