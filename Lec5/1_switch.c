#include <stdio.h>
int main()
{
    int i = 0;
    printf("Enter a number ");
    scanf("%d", &i); //1

    switch (i)
    {
    case 1:
        printf("Case 1\n");
        break;
    case 2:
        printf("Case 2\n");
        break;
    case 3:
        printf("Case 3\n");
        break;
    case 4:
        printf("Case 4\n");
        break;

    default:
        printf("Default \n");
    }
    return 0;
}