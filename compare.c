#include <cs50.h>
#include <stdio.h>

int main(void) {
    int x = get_int("What is x? ");
    int y = get_int("What is y? ");

    if(x > y){
        printf("X is greater than Y\n");
    }
}
