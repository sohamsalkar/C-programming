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
    e1.id = 101;                    //dot operator
    strcpy(e1.name, "babu bhaiya"); //copying string into char array
    //printing first employee information
    printf("employee 1 id : %d\n", e1.id);
    printf("employee 1 name : %s\n", e1.name);

    struct employee e2; // struct(structure) (name of struct ) (variable);

    e2.id = 102;
    strcpy(e2.name, "raju");

    printf("employee 2 id : %d\n", e2.id);
    printf("employee 2 name : %s\n", e2.name);

    struct employee e3;
    e3.id = 103;
    strcpy(e3.name, "shyam");
    printf("employee 3 id : %d\n", e3.id);
    printf("employee 3 name : %s\n", e3.name);

    printf("\n\n%lu\n\n", sizeof(e2));
    return 0;
}

/*


int e1id=10
string e1name =xyz
int e1phno=

int e2id;
string e2name;
e2phno;
*/