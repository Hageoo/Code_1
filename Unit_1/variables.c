include <stdio.h>
#include "sum.h"

//datatype integer, flotantes, string(cadenas de texto), caracteres
//cajas que almacenan info, para usarlas dspués del código:
//global variables//
int edad = 18;
float estatura = 1.70;
char* name = "Hageo";
char sexo = 'M';


int main(){
    int after10years = suma(edad, 10);
    printf("mi edad después de 10 años: %d", after10years);
    return 0;
}