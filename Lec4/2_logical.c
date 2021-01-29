#include <stdio.h>
int main()
{
    int a = 10, b = 5, c = 15, d;
    printf("\n1.%d\t%d\t%d\t%d\n", a, b, c, d);

    d = a > b && b > c;
    printf("2.%d\n", d);

    d = a > b || b > c;
    printf("3.%d\n", d);

    a = 10, b = 10, c = 10;
    d = a == b == c;
    printf("4.%d\n", d); //d=0

    d = a == b && b == c;
    printf("5.%d\n", d);

    return 0;
}