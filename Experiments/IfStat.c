#include <stdio.h>
// using if and else if (a condition inside an if, just like a filter, you can add as many as you need)
int main (){
    int number;
    printf("\nPlease enter a number:\t");
    scanf("%d", &number);

    if( number==3||number==5||number==7||number==2){
    printf("It is a prime number\n");
    }
    else if (number%2==0) {
        printf("It is not a prime number\n");
    }
    else if (number%3 == 0) {
    printf ("It is not a prime number\n");
    }                           // gotta be careful with these curly braces I usually forget to put em in the right place
    else if (number%5 == 0){
        printf("It is not a prime number\n");
    }
    else if (number%7 == 0) {
        printf("It is not a prime number\n");
    }
    else
    {
        printf("It is a prime number\n");
    } 
    
    return 0;    
}