#include <stdio.h>
int main()
{
    // grade-rollnumber-percentage
    char g;  // %c
    int r;   // %d
    float p; //%f   ,  double -> %lf

    printf("Enter grade "); /*yaha pe console pe puchte hai grade */
    scanf("%c", &g);

    printf("enter roll number ");
    scanf("%d", &r);

    printf("Enter percentage ");
    scanf("%f", &p);

    printf("your grade is %c \nyour roll number is %d\nyour percentage is %f ", g, r, p);

    return 0;
}
