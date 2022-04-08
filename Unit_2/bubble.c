#include <stdio.h>

int main (){

    int arr[] = {1, 3, 0, 10}; 

    int lenght = 4;

     for(int i = 0; i < lenght; i++) //en este caso puse un ";" extra al final y no funcionaba 
     {
         for (int j = 0; j < (lenght - 1); j++)
         {
             if (arr[j] > arr[j + 1])
             {
                 int temp = arr[j];
                 arr[j] = arr[j + 1];
                 arr[j + 1] = temp;

             }
         }
     }

     for (int i = 0; i < lenght; i++)
     printf("array[%d] = %d\n", i, arr[i]);

     return 0;
}            