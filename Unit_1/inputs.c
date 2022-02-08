#include <stdio.h>

int num1; //declarando variable
int num2;

int main (){

    //imprimir mensaje//
    printf("Enter number1,\n\tnum1: ");
    //inputs//
    scanf("%d", &num1);
    printf("Enter number2,\n\tnum2: ");
    scanf("%d", &num2);
    int sum = num1 + num2;
    printf("suma = %d\n", sum);
    return 0;
}