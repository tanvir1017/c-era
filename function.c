#include <cs50.h>
#include <stdio.h>

/**
 * This is called
 * Prototype in C
 * Making a function prototype top of the file
 * */
int get_positive_int(void);
void mew(int num);

int main(void)
{ // void means which will not take any input

    /*     for (int i = 0; i <= n; i++)
        {
            mew();
        } */
    int times = get_positive_int();
    mew(times);
}

// Only getting the positive number
int get_positive_int(void){
    int n;
    do
    {
        n = get_int("How many times you want to hear mew 😺? \n");
    }
    while (n < 1);
    return n;
}

// Mewing for times(user input)
void mew(int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("Mew 😽 %i\n", i);
    }
}
