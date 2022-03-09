#include <stdio.h>
#include <math.h>
//introducción y usos de math.h
int main (){
 
    double a;
    double b;
    double x;
    char op;

    printf("\nEnter a value for a: ");
    scanf("%lf", &a);

    printf("\nEnter a value for b: ");
    scanf("%lf", &b);

    printf("What do you want to do? ( *, /, +, - )");
    scanf("%c", &op);

    switch(op){
        case '*':
        x = a * b;
        printf("\nResult: %lf", x);
        break;
        case '/':
        x = a / b;
        printf("\nResult: %lf", x);
        break;
        case '+':
        x = a + b;
        printf("\nResult: %lf", x);
        break;
        case '-':
        x = a - b;
        printf("\nResult: %lf", x);
        break;
        default: 
        printf("\nPlease enter a valid character\n");
    }
    /*double A = sqrt(9); //sqrt pa raíces cuadradas
    double B = pow(2, 4); //= 2^4 (para potencias)
    int C = round(3.4); //para redondear
    int D = ceil(3.1); //para redonder hacia arriba
    int E = floor(3.99); //pa redondear abajo
    double F = fabs(-100); //distancia de un número desde cero
    double G = log(3); //logaritmos
    double H = sin(45); //seno
    double I = cos(45); //coseno
    double J = tan(45); //tangente

    printf("\nsqurt: %lf", A);
    printf("\npow: %lf", B);
    printf("\nround: %d", C);
    printf("\nceil: %d", D);
    printf("\nfloor: %d", E);
    printf("\nfabs: %lf", F);
    printf("\nlog: %lf", G);
    printf("\nsin: %lf", H);
    printf("\ncos: %lf", I);
    printf("\ntan: %lf\n", J); */

    return 0;
}