#include <stdio.h>
int add(int n1, int n2);
void avg(int n1, int n2);

int main()
{
    int n1, n2;
    int sum;
    printf("enter 2 numbers: ");
    scanf("%d %d", &n1, &n2);
    sum = add(n1, n2);           // 1. add (6 , 8 ) //4. sum = r
    printf("sum is: %d\n", sum); //14
    avg(n1, n2);                 //5.

    return 0;
}

int add(int n1, int n2) // 2. n1=6 , n2=8
{
    int r;
    r = n1 + n2; // 14
    return r;    //3.
}

void avg(int n1, int n2) //6.
{
    float m;
    int sum;
    sum = add(n1, n2); //7.
    m = sum / 2.0;
    printf("avg is %.2f\n", m);
}
