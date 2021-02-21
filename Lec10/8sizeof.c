#include <stdio.h>
int main() // warnings because of sizeof returns %lu unsigned long
{
    void *ptr = NULL; //void pointer
    int *p = NULL;    // integer pointer
    int a = 10;
    char *cp = NULL; //character pointer
    char ch = 'h';
    float *fp = NULL; //float pointer
    float f = 7.42;
    //size of void pointer
    printf("size of void pointer = %d\n", sizeof(ptr));
    //size of integer pointer
    printf("size of integer pointer = %d\n", sizeof(p));
    printf("size of int = %d\n", sizeof(a));
    //size of character pointer
    printf("size of character pointer = %d\n", sizeof(cp));
    printf("size of char = %d\n", sizeof(ch));
    //size of float pointer
    printf("size of float pointer = %d\n", sizeof(fp));
    printf("size of float = %d\n", sizeof(f));
    return 0;
}