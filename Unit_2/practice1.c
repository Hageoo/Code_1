#include <stdio.h>
//práctica, estudiar para el quiz, problemas similares
void alternating_sum (int array[5], int arr){
    int i = 0;
    int a = 0;
    while (i < arr){  //en este caso con while, intentar con for
        a = a + array[i];
        i = i + 2;
    }
    int b = 0;
    i = 1;
    while (i < arr){ 
        b = b + array[i];
        i = i + 2; 
        //intervalos
    }
    printf ("{%d, %d}\n", a, b); //aquí otra vez me hizo falta agregar las variables dentro que toman el lugar del %d, no compila
    return; //recordar que no hace falta especificar el valor del return, ya que sigue estando dentro de la función void, la cual no regresa nada
}


int main(){
    int equiposintercalados[5] = {50,60,60,45,70};  
    //el 5 = 5 bytes, para que sea equivalente a lo que se encuntra dentro de void
    alternating_sum (equiposintercalados, 5); //"función" para tener de output 
    return 0;
}