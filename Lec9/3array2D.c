#include <stdio.h>
/*       c1 c2 c3
1 1 1 r1>         
2 2 2 r2         
3 3 3 r3
*/
int main()
{
    int a[50][50];
    int r, c, i, j;
    scanf("%d %d", &r, &c); // 3 3
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]); // for transpose a[j][i]
        }
        printf("\n");
    }

    return 0;
}
