#include <stdio.h>


// Design the algorithm for a program that find the greatest number within given 3 numbers by the user. 

//function

int greatest(int array[], int length)  //defining the function that we will be calling later on the code
{ 
    for (int i = 0; i < length; i++)
    {
        for (int x = 0; x < length - 1; x++)
        {
            if(array[x] > array[x + 1])
            {
                int temp = array[x];
                array[x] = array[x + 1];
                array[x + 1] = temp;
            }
        }
    }
     int greatest = array[length - 1];
        
    return greatest;
   
}

int main(){

    int array[] = {0, 0, 0}; //just a place holder for the values of the array, worth noting that the user will be defining each one of those

    int lenght = sizeof(array) / sizeof(int);

    printf("Please type in the values of each component of the array (3 numbers): \n");

    scanf("%i%i%i", &array[0], &array[1], &array[2]); //taking the values for each component in the array from the user 

    int BigValue = greatest(array, lenght); //calling the function and passing the variables to it

    printf("The greatest number of the array provided is: %d \n", BigValue);

    return 0;

}