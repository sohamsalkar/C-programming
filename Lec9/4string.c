#include <stdio.h>
int main()
{
    char s1[20];
    char s2[] = "hello world";
    int f;
    printf("string plz\n");
    scanf("%s", s1);

    //scanf("%d", &f);

    printf("s1 is: %s \n s2 is %s", s1, s2);
    printf("%s", s2);
    printf("%c", s2[7]);

    return 0;
}

/* 
s1<- hie how are you
s1[0] 'h' (char)
s1[4] ' '
*/