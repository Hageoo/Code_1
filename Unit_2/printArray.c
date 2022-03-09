#include <stdio.h>

void print_array(int array[3],int arr){ 
    //len 
    int i = 0;
    printf("{"); 
    //se empieza a imprimir
    while (i < arr){
        printf("%d",array[i]);
        if (i < arr-1){
            printf(",");
        }
        i = i + 1; 
        //index = i, es más sencillo trabajar con i que con index
    }
    printf("}\n");
}

int main(){
    int arr = 3;
    int array [3] = {5, 2, 3};
    print_array(array,3);
    return 0;
    //las funciones void siempre se pueden usar para repetir codigo en caso de que sea necesario, es considerado mala prácica repetir código de manera innecesaria
    }