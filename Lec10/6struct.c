#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[50];
} e1; //declaring e1 variable for structure

int main()
{
    //store first employee information
    e1.id = 101;
    strcpy(e1.name, "babu bhaiya"); //copying string into char array
    //printing first employee information
    printf("employee 1 id : %d\n", e1.id);
    printf("employee 1 name : %s\n", e1.name);

    struct employee e2;
    e2.id = 102;
    strcpy(e2.name, "raju");
    printf("employee 2 id : %d\n", e2.id);
    printf("employee 2 name : %s\n", e2.name);

    return 0;
}