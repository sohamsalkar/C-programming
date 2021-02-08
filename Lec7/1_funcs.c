#include <stdio.h>
int i;
void star();

int main()
{
    int a, b;
    int sum = 0;
    printf("enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    star();
    star();
    printf("\n%d is sum\n", sum);
    star();
    star();
    i = 10;
    return 0;
}

void star()
{

    for (i = 0; i <= 10; i++)
    {
        printf("*");
    }
    for (i = 0; i <= 10; i++)
    {
        printf("*");
    }
    printf("\n");
}