#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20] = "HelloStudents";
    printf("Length of string str1: %d\n", strlen(str1)); //%lu

    char str2[10] = "Welcome";
    char str3[10] = "Everyone";
    //strcat(str2, str3); //strncat(s1,s2, 3);
    //printf("Output string after concatenation: %s\n", str2);

    strcpy(str2, str3);
    printf("String s1 is: %s\n", str2);

    char mystring[30] = "i am soham and teaching C";
    printf("%s\n", strchr(mystring, 't'));

    
    return 0;
}