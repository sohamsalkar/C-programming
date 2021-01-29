#include <stdio.h>
int main()
{
    int a = 5, b = 7, c;
    printf("\n1.)%d\t%d\t%d\n", a, b, c);

    c = a == b;
    printf("2.)%d\t%d\t%d\n", a, b, c);

    a = 10, b = 25;
    c = a != b;
    printf("3.)%d\t%d\t%d\n", a, b, c);

    c = a < b;
    printf("4.)%d\t%d\t%d\n", a, b, c);

    printf("5.)%d\n", a > b);

    return 0;
}