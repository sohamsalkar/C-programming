#include <stdio.h>
int main()
{
    char ch;
    printf("Enter charachter ");
    scanf("%c", &ch);

    switch (ch) // case x : colon
    {
    case 'd':
        printf("Case D \n");
        break;
    case 'b':
        printf("Case B \n");
        break;
    case 'c':
        printf("Case C \n");
        break;
    case 'z':
        printf("Case Z \n");
        break;
    default:
        printf("Default \n");
    }
    return 0;
}