#include <stdio.h>
int main()
{
    int a;
    int b;
    int c = 5;

    printf("enter a \n");
    scanf("%d", &a);

    printf("enter b \n");
    scanf("%d", &b);

    //printf("%d\n", a + b);

    //printf("%f\n", (float)a / b); //float

    //a = b--; // 1.a=b 4    2.b--  3
    //a = --b; // 1.--b  3   2.a=b  3

    //a += b--;   //1.a += b 10  2.b-- 3

    //a += --b + a++; //a += 10 ->  a = a +10;

    //a = b++ + ++c; // 4 + 6

    printf("ANS a) %d\n", a);
    printf("AND b) %d\n", b);
    printf("AND c) %d\n", c);

    return 0;
}

/*  ++ -> increment
    -- -> decrement
*/

//   -=