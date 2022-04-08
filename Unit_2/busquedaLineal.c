#include <stdio.h>
#include <stdlib.h>
/*otra rama, clonar codigo en otra rama (QA)(para cybersecurity, corriendo tests para encontrar vulnerabilidades), programar en rama develop,
 apartir de esa rama se crea otra rama con el nombre a desear, heredando los cambios de la rama develop, se concatena y "pushea" los cambios a la rama develop
 y se borra la rama que cree, ya cumplió su función; (feat/Hageo/(nombre de la tarea) el ultimo en "mergear" tiene que resolver los conflictos
 en caso de que la version liberada a los usuarios se crea un rama "hotfix" para resolver el bug (2 horas - 2 días) 
 git checkout -b*/

/*busqueda binaria y lineal, retornar -1, en caso de no encontrar el dato, algoritmos de busqueda
{'1', '2', '3', '4', '5'}, si quiero buscar el 3, los 2 mas conocidos es el binary search y la busqueda lineal, me pregunto si el primer elementos es el 3 que estoy buscando
si no es, sigo buscando, y sigo hasta encontrar el dato para retornar el index en el que se ubica, (para linear search), es un tanto pesado si se trabajan con 
millones de datos, para binary search, divide la cantidad de los datos a la mitad para que sea más sencillo de procesar, te que preguntarme si el elemento que está
en medio o al centro es el que estoy buscando, y ver si es mayor o menor, así saber en que mitad biscar el dato, ya que no hace sentido buscar el 3 depués del 6 
en una secuencia de numeros ordenados de menor a mayor, binary search, solo funciona con datos ordenados previamente.
en caso de estar trabajando con char(letras), es posible ordenarlos tomando en cuenta el valor equivalente de la letra en el sistema binario, dependiendo de lo que 
se requiera, (busqueda binaria). ordenamiento burbuja, bubble sort = recorre repetidament una lista que se necesita ordernar, compara elementos adyacentes
ylos intercambia si están en el orden incorrecto.*/

/*

examen de código: estudiar; 

Arrays
	
Bucles (Fors)
	
If, else, else if
	
argv, argc
	
condiciones (==, >=, <=, <, >)

*/

int linearSearch(int arr[], int sizeArray, int valueToFind){
    printf("funcion ejecutada\n"); //poner printf para ver que está pasando con el código (saber si está funcionando)
    for  (int i = 0; i < sizeArray; i++){
        printf("current Index: %d   arreglo data: %d\n", i, arr[i]);
        if (arr[i] == valueToFind){
            return i;
        }
    }

    return -1;
};

int main (int argc, char ** argv){
    int arr[5] = {50, 5, 1, 37, 4};
    int indexFound = linearSearch(arr, 5, atoi(argv[1]));
    printf("index Found: %d\n", indexFound); 

    return 0;
}