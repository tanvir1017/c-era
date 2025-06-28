#include <cs50.h>
#include <stdio.h>

int main(){
    int x = get_int("X: ");
    int y = get_int("Y: ");

    printf("Here's %.50f.\n", (double) y / x);
}
