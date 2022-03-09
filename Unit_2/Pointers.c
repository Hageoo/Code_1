#include <stdio.h>

/*deleting and storing memory as it is required by the program, when i declare a variable it is stored randomly 
punteros y dirección, cada espacio de la memoria tiene una dirección, es posible referenciar la variable con esa dirección
cada slot tiene dirección propia, si bien es aleatorio el slot, depende del tamaño de la variable -- -- -- 
direcciones de memoria = 0x3228738272 (considerando unicamente los ultimos dos digitos para identificar c/ direcciónen este ejemplo)
 & = la direccón de.      para modificar el valor de referencia sino el valor de raíz (original)  una modificación no en el original 
 para crear un pointer, hace falta un espacio de memoria = "int* ajo" (el asterisco hace referencia a el almacenamiento de una direccion y no un valor como tal)
 pointers*2 o *3, codigo que modifique datos en una placa que no acepta el codigo de c, ejemplo, miguel = &edad >> miguel = (0x80) la direccion de
 (*) = el valor de la dirección, ignora la direccion y toma lo que está almacenado en aquella dirección        -------       *edad          printf("dato%i", *miguel)      
*/

// nodos y pointers -- memoria ram -- se limpia cada cierto tiempo 



//funciones por referencia y por valor


// (i%) para enteros
int edad = 3;
int* miguel;


int main (){
    miguel = &edad;
    printf("Dato miguel: %p\n", &miguel); //pointers (%p)
    printf("Dato edad: %p\n", &edad);
    printf("Dato: %p\n", miguel);

    return 0;
}