#include <stdio.h>
int main()
{
    void *ptr = NULL; //void pointer
    int *p = NULL;    // integer pointer to point integer values
    int a = 10;
    char *cp = NULL; //character pointer to point charachter
    char ch = 'h';
    float *fp = NULL; //float pointer to point float values
    float f = 7.42;

    //sizeof() // warnings because of sizeof returns %lu unsigned long size

    //size of void pointer
    printf("size of void pointer = %d\n", sizeof(ptr));
    //size of integer pointer
    printf("size of integer pointer = %d\n", sizeof(p));
    printf("size of int = %lu\n", sizeof(a));
    //size of character pointer
    printf("size of character pointer = %d\n", sizeof(cp));
    printf("size of char = %d\n", sizeof(ch)); // ASCII
    //size of float pointer
    printf("size of float pointer = %d\n", sizeof(fp));
    printf("size of float = %d\n", sizeof(f)); //7.353523
    return 0;
}
