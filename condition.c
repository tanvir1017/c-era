#include <stdio.h>

int main()
{
    int number;

    printf("Enter value for number among 1 to 12: ");
    scanf("%i", &number);

    if (number == 1)
        printf("January \n");
    else if (number == 2)
        printf("February \n");
    else if (number == 3)
        printf("March \n");
    else if (number == 4)
        printf("April \n");
    else if (number == 5)
        printf("May \n");
    else if (number == 6)
        printf("June \n");
    else if (number == 7)
        printf("July \n");
    else if (number == 8)
        printf("August \n");
    else if (number == 9)
        printf("September \n");
    else if (number == 10)
        printf("October \n");
    else if (number == 11)
        printf("November \n");
    else if (number == 12)
        printf("December \n");
    else
        printf("Invalid input");

    return 0;
}
