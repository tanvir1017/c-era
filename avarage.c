// A function whill will return the sum of avarage value from array
#include <cs50.h>
#include <stdio.h>

// Constent value
const int N = 3;

// Prototype
float avarage(int length, int array[]);

// main function
int main(void)
{
    // Get scores
    int scores[N];
    for (int i = 0; i < N; i++){
        scores[i] = get_int("Score: ");
    }


    // Print avarage
    printf("Avarage %f\n", avarage(N, scores));
}


// Avarage function
float avarage(int length, int array[]){
    // Calculate avarage
    int sum = 0;
    for (int i = 0; i < length; i++){
        sum += array[i];
    }
    return sum / (float) length;
}
