#include <stdio.h>
void change1(int num)
{
    printf("\nBefore adding,in change 1 num = %d \n", num);
    num = num + 100;
    printf("After adding, in change 1 num = %d \n\n", num);
}
void change2(int *adr)
{
    printf("Before adding value inside function num = %d \n", *adr);
    *adr = *adr + 100;
    printf("After adding value inside function num = %d \n\n", *adr);
}
int main()
{
    int x = 100;
    printf("\nBefore change1 call x = %d \n", x);
    change1(x); //passing value in function
    printf("After change1 call x = %d \n\n", x);
    change2(&x); //passing refernace in fuction
    printf("After change2 call x = %d \n", x);
    return 0;
}