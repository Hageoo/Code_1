#include <stdio.h>



/*tipo de retorno, nombreFuncion (tipo param1, tipo param2){
    intrucciones(procesos)
    return valor --- cuando una función muere
    por dirección y por paso de referencia, tipos de funciones

    int max(int x, int y)                       //devuelve un tipo int
    double                                      //devuelve un double
    int *myFunction(int a, int b, int c)        //devuelve un pointer int
    void secondFunction(int a, int z)           //no devuelve nada
} */
//pointers !!!!!!
int sumaNumeros(int number1, int number2);  //prototipo

void modificarVariables(int a, int b){
    a = a * 2;
    b = b * 2;
    printf("localVariables:::: a: %d, b = %d\n", a, b);
    return; //para que retorne "nada"
}
 void modificarVariablesAddress(int* variable1, int* variable2){
     *variable1 = *variable1 * 2;
     *variable2 = *variable2 * 2;
     return;
 }
int a = 10;
int b = 20; //multiplicar *2 modificar raíz, no valor predeterminado

int main (int argc , char**argv){  //entrada, parametros (madera sin refinar), otro parametro de entrada (combustible de la refinería)
    //procesos 
    sumaNumeros(2, 4); //llamando a la función
    int mySum = sumaNumeros(2, 4);
    printf("Suma 10 + 20 = %d\n", sumaNumeros(10, 20));
    //modificar variables
    printf("a: %d, b= %d\n", a, b);
    modificarVariables(a, b);
    printf("a: %d, b= %d\n", a, b);
    //using pointers
    printf("a: %d, b= %d\n", a, b);
    modificarVariablesAddress(&a, &b);
    return 0;
}       //en c se puede tener una sola salida, a diferencia de python
int sumaNumeros(int number1, int number2){ //definiendo la función (sumaNumeros()), variables locales 
        int suma = 0;
    suma = number1 + number2;
        return suma;
    }
    //funciones por valor o por dirección (para proyectos de software, sin tener acceso a main, sin acceso a variables, modificar los datos cuando llegan)
    //nodos con pointers
    //algoritmos de busqueda u ordenamiento
    //quick sort, para cuidar la memoria
    //funciones que no dependan de variables locales
    //casteo explicito e implicito (casting) prox...