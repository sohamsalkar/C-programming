#include <stdio.h>
#include <math.h>
#include <stdlib.h> // imp
int main()
{
    printf("\n%.2f", ceil(3.6));   //4
    printf("\n%.2f", ceil(3.01));  //4
    printf("\n%.2f", floor(3.99)); //3
    printf("\n%.2f", floor(3.2));  //3
    printf("\n%.2f", sqrt(16));    //4
    printf("\n%.3f", sqrt(7));     //2.646
    printf("\n%.2f", pow(2, 4));   //2^4
    printf("\n%.2f", pow(3, 3));   //3^3
    printf("\n%d\n", abs(-12));
    return 0;
}

/*
ceiling> 4
|
3.6
|
3.3
|
floor >3
*/