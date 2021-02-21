#include <stdio.h>
int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int *j, *k;
    j = &a[4];
    k = (a + 4);
    if (j == k)
    {
        printf("both are same \n");
        printf("%d\t%d\t%d\n", j, *j, &j);
    }
    else
        printf("different locations\n");

    return 0;
}