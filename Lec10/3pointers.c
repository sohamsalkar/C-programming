#include <stdio.h>
int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int *j, *k; // j and k pointers hai is declare
    j = &a[4];
    k = (a + 4); // &a[i] = (a+i)

    int t = a[4];
    int b = *(a + 4); //a[i]= *(a+i)

    printf("%d,%d", t, b); // 50 50
    if (j == k)
    {
        printf("both are same \n");
        //printf("%d\t%d\t%d\n", j, *j, &j); //value at j? a[4]
    }
    else
        printf("different locations\n");

    return 0;
}

/*


"&">>> 'address of' operator / reference 

"*" >>> 'value at address' / dereference
int a,b;
a=6;
b=7;
int x = 10;

x > | 10  | if 4 bytes, then 1000 to 1004
    1000 adr of memory loc.

int *p; //declare pointer p
p = &x // p = adr of x



*/