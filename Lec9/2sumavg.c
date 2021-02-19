#include <stdio.h>
int main()
{
    int a[100]; //array
    int i, n, sum = 0;
    float avg;
    printf("how many elements ka sum chahiye tujhe?? \n");
    scanf("%d", &n); //5
    printf("enter %d elements \n", n);

    for (i = 0; i < n; i++) //0 to 4 i.e 5 values
    {
        scanf("%d", &a[i]); // 10 10 10 10 13
    }
    for (i = 0; i < n + 2; i++) //0 1 2 3 4 5
    {
        printf(" %d ", a[i]);
        sum += a[i];
    }
    //a[5]-> 6th value
    printf("sum is %d ", sum);
    avg = sum / (float)n;
    printf("avg is %.2f", avg);

    return 0;
}