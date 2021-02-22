#include <stdio.h>
int main()
{
    int x = 20, y, z, *ip;

    ip = &x; //addr of x

    y = ++(*ip); // 21
    //value at address pointed by ip

    printf("%d\t%d\n", y, *ip); //21 21

    z = (*ip)++;                // z = 21 , post 22
    printf("%d\t%d\n", z, *ip); //21 22

    printf("%d\n", x);
    return 0;
}
