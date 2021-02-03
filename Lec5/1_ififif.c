#include <stdio.h>

int main()
{
    int i;
    printf("Enter 1-7 integer for week days\n");
    scanf("%d", &i); //2
    if (i == 1)
        printf("monday\n");
    else if (i == 2)
        printf("tuesday\n");
    else if (i == 3)
        printf("wed\n");
    else if (i == 4)
        printf("thur\n");
    else if (i == 5)
        printf("fri\n");
    else if (i == 6)
        printf("sat\n");
    else if (i == 7)
        printf("sunday\n");
    else
        printf("nikal\n");

    return 0;
}