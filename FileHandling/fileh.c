#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ip, *op;
    char SF[30], DF[30], ch;
    printf("enter input file name to be copied: \n");
    gets(SF);
    printf("enter name of op file \n");
    gets(DF);

    ip = fopen(SF, "r");
    if (ip == NULL)
    {
        printf("unable to open \n");
        exit(1);
    }
    op = fopen(DF, "w");
    if (op == NULL)
    {
        fclose(ip);
        printf("unble to open \n ");
        exit(1);
    }
    while ((ch = fgetc(ip)) != EOF)
        fputc(ch, op);
    printf("hogaya\n");
    fclose(ip);
    fclose(op);
    return 0;
}