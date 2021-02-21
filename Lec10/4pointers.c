#include <stdio.h>
int main()
{
    int x = 20, y, z, *ip;
    ip = &x;
    y = ++(*ip);
    printf("%d\t%d\n", y, *ip);
    z = (*ip)++;
    printf("%d\t%d\n", z, *ip);
    return 0;
}
