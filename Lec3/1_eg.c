#include <stdio.h>
int main()
{
    int a = 10;
    int b = 4;
    float c;

    printf("1.%d\n", a);
    printf("2.%d\n", b);

    c = (float)a / b; //10.000000/4
    //type casting
    //  int/int-> int        float/int-> float

    printf("ans.\t%f", c);
    return 0;
}