#include <cs50.h>
#include <stdio.h>

int main(){
    //int dollar = 1;

    // while(true){
    //     char c = get_char("Here's $%i. Double it and give it to next person? ", dollar);
    //     if(c == 'y'){
    //         dollar *= 2;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }

    // printf("Here's $%i.\n", dollar);


    /*----------------------------------------------------- Long int -----------------------------------------------------  */
    long dollar = 1;
    while (true){
        char c = get_char("Here's $%li. Double it and give it to next person? ", dollar);
        if(c == 'y'){
            dollar *= 2;
        }else{
            break;
        }
    }
    printf("Here's $%li.\n", dollar);
}
