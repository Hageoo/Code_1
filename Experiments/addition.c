#include <stdio.h>

int main (int argc, int **argv[]){
    int num1, num2, resultado;
    printf ("ingrese el primer valor\n");
    scanf ("%d\n, &num1");
    printf ("ingrese el segundo valor\n");
    scanf ("%d\n, &num2");
    resultado = num1 + num2;
    printf ("el resultado de la suma es: %d\n", resultado);
    return 0;

}