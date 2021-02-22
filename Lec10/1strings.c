#include <stdio.h>
//#include <string.h> // operations to perform on strings
int main()
{

    char str[20];

    printf("Enter your name: ");

    /* 
     * Array name alone works as a base address of array so
     *  we can use nickname instead of &nickname here
     */
    scanf("%s", str); // &str[0]
    printf("%s\n", str);

    //gets(str);
    puts(str); // same as printf but only string

    return 0;
}
