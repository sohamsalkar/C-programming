#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20] = "HelloStudents";
    printf("Length of string str1: %lu\n", strlen(str1)); //%lu // returns length of the string

    char s1[10] = "Welcome"; //
    char s2[10] = "Everyone";
    //strcat(str2, str3); //strncat(s1,s2, 3);
    //printf("Output string after concatenation: %s\n", str2);
    //concatenate second string at the end of the first string

    strcpy(s2, s1); //overwrite first string i.e. copy content into first string
    printf("String s1 is: %s and s2: %s\n", s1, s2);

    char mystring[30] = "i am soham and teaching C";
    printf("%s\n", strchr(mystring, 't')); //null - > no value , void

    return 0;
}