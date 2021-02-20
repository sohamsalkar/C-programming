#include <stdio.h>
#include <string.h>
int main()
{

    char name[20];

    printf("Enter your name: ");

    /* 
     * Array name alone works as a base address of array so
     *  we can use nickname instead of &nickname here
     */
    scanf("%s", name);
    printf("%s\n", name);

    //gets(name);
    puts(name);

    return 0;
}
