#include <cs50.h>
#include <stdio.h>

int get_string_length(string s);
int main()
{
    string name = get_string("Name: ");
    int string_length = get_string_length(name);
    printf("%i\n", string_length);
}


// A function which calculate the total length of an given string
int get_string_length(string s){
    int n = 0;
    while (s[n] != '\0'){
        n++;
    }

    return n;
}