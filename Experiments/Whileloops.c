#include <stdio.h>
#include <string.h>
// a while loop could be repeated unlimited times
//as long as a certain statement remains true
//or it might just not be executed at all
int main(){

    char name[25];
    printf("\nPlease type in your username: ");
    fgets(name, 25, stdin); //stdin is for standard input
    name[strlen(name) - 1] = '\0'; // here we are essentially substracting 1 (-1) from the lenght of our string (string lenght = strlen)
                        //the backslash cero will get rid of the new line character 
    printf ("\nWelcome %s\n", name);

    while(strlen(name) == 0)
    {
        printf ("You did not specified your username");
        printf("\nPlease type in your username: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
        printf ("\nWelcome %s\n", name);
    }

    return 0;
}