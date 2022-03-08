#include <stdio.h>
//printArray(nombre del arreglo, tamaño del arreglo); con while

int main(){
    int myArray[3]={5, 2, 3};
    int i = 0;

    void printArray(int myArray[3], int arrayLenght){
        while (i < 3){
            printf ("%d\t", myArray[i]);
            i++;
        }
    }
    printArray (myArray, 3);
    return 0;
}
