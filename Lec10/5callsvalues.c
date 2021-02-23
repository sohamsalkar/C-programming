#include <stdio.h>
void change2(int *adr) // ptr -> 5000 //local pointer of ch2> its a original
{
    printf("--Before adding value inside function num = %d \n", *adr);
    *adr = *adr + 100;
    printf("--After adding value inside function num = %d \n\n", *adr);
}
void change1(int x) //num local variable of ch1> its a copy || int x = 101
{
    printf("\n--Before adding,in change 1 num = %d \n", x);
    x = x + 100;
    printf("--After adding, in change 1 num = %d \n\n", x);
    //change2(&x); //5000
    //printf("--After adding, in change 1 after ch2 num = %d \n\n", x);
}

int main()
{
    int x = 100; //local variable of main
    x++;         //x=x+1
    printf("\n1.Before change1 call x = %d \n", x);
    change1(x); //passing value in function
    //i.e. change1(101)
    printf("2.After change1 call x = %d \n\n", x);

    change2(&x); //passing reference in fucntion // kya jaa raha hai? address of x
    printf("3.After change2 call x = %d \n", x);
    return 0;
}

/*
x |   201 |(main wala )
   1000

x | 301   |(change1 wala)
    5000


*/