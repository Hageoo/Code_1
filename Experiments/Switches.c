#include <stdio.h>
// Switch is an alternative for a huge amount of "else if" statements
int main (){
    char grade;

    printf ("\nPlease, type your grade (in upper case): \t");
    scanf ("%c", &grade);

    switch (grade){
    case 'A':
        printf("Impressive!\n");
        break;
    case 'B':
        printf("You did good!\n");
        break;
    case 'C':
        printf("Well, at least you did not failed\n");
        break;
    case 'D':
        printf("At least it is not an F\n");
        break;
    case 'F':
        printf("You succ lol\n");
        break;              //the breaks are places just so we can exit the switch, otherwise it will keep on going trough each case 
    default:
        printf("That is not even a grade\n");
    }
    return 0;
}