#include <stdlib.h>
#include <stdio.h>
#define VADAPAV 15
#define SAMOSA 17
#define BHEL 20
#define SANDWICH 45
#define TEA 7

int main()
{
    int choice = 0;
    int totalprice = 0;
    printf("WELCOME to Snackcorner\n");
    printf("Here is our menu\n\n");

    do
    {
        printf("MENU\n");
        printf("1.VadaPav \tRs.%d\n", VADAPAV);
        printf("2.Samosa \tRs.%d\n", SAMOSA);
        printf("3.Bhel \t\tRs.%d\n", BHEL);
        printf("4.Sandwich \tRs.%d\n", SANDWICH);
        printf("5.Tea \t\tRs.%d\n", TEA);
        printf("6.bas itna hi\n");
        printf("please select your snacks ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            totalprice += VADAPAV;
            break;
        case 2:
            totalprice += SAMOSA;
            break;
        case 3:
            totalprice += BHEL;
            break;
        case 4:
            totalprice += SANDWICH;
            break;
        case 5:
            totalprice += TEA;
            break;
        case 6:
            printf("Thanks for ordering\n");
            break;
        default:
            printf("menu mein se manga\n");
        }
        if (choice != 6 || choice > 6)
            printf("Total bill so far.... %d\n", totalprice);

    } while (choice != 6);
    printf("Your final total bill is %d\n", totalprice);
    printf("thanks for coming to our snacks corner\n visit again!!\n");

    return 0;
}