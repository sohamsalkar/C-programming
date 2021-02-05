#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter a number to check: ");
    scanf("%d", &n); //7
                     //out for loop 1 to 100 .. for 1 to 100
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
            break;
    }
    if (i == n)
    {
        printf("%d is prime number and i is %d ", n, i);
    }
    else
        printf("%d is not a prime number and i is %d ", n, i);
    //
}

//1 to 100 prime numbers?