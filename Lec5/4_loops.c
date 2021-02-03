#include <stdio.h>
int main()
{
    int count = 0;
    /*
    while (count < 10)
    {
        printf("%d\n", count);
        ++count;
    }
    */

    do
    {
        printf("%d\n", count);
        ++count;
    } while (count < 10);

    return 0;
}