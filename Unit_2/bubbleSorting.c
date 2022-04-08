#include <stdio.h>
#include <stdlib.h>


/* Bubble sort is a basic algorithm for arranging a string of numbers
or other elements in the correct order. 
 The method works by examining each set of adjacent elements in the string, from left to right, 
 switching their positions if they are out of order. The algorithm then repeats this process 
 until it can run through the entire string and find no two elements that need to be swapped.*/


// Because it has to repeatedly cycle through the entire set of elements, comparing only two adjacent items at a time, bubble sort is not optimal for more massive datasets.  
//But it can work well when sorting only a small number of elements.

int main(){

   
    int j = 0;
    int i = 0;
    int x = 0;
    int k = 0;
    int arrSize = 0;
    int array[10] = {}; 
    int lenght = sizeof(array)/ sizeof(int);
    printf("Please type in the values of the components in the array (10 values):\n");
    for (i = 0; i < 10 ; i++)
    {
        scanf("%d", &array[i]);
    }
    lenght = sizeof(array)/sizeof(int);

   
    printf("Array provided: \n");
    printf("{");
    for (int x = 0; x < lenght; x ++)
    {
        printf("%d", array[x]);
        if (x < lenght - 1)
        {
            printf(", ");
        }
    }
    printf("}\n");

   
    for (i = 0; i < lenght; i++)
    {
        for (j = 0; j < lenght - 1; j++)
        {
            if(array[j] > array[j+1]){
                int temporal = array[j];
                array[j] = array[j+1];
                array[j+1] = temporal;
            }
        }
    }


    
    printf("Array sorted (bubble sorted): \n");
    printf("{");
    for (int k = 0; k < lenght; k++)
    { 
        printf("%d", array[k]);
        if (k < lenght - 1)
        {
            printf(", ");
        }
    }
    printf("}\n");

    return 0;
}