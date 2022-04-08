#include <stdio.h>

/* Design the algorithm for a program that obtain the length and width of a rectangle from the user.
 Calculate and output the area. If the length and width are equal, output a message indicating that the figure is a square. 
 Make a list of variables, draw the flowchart, and perform a desk check using 
the following: 4, 8, 5, 5 */

int main () 
{
    int width;
    int lenght;
 
    
    printf("Type in the width, please: ");

    scanf("%d", &width);

    printf("Type in the lenght, please: ");

    scanf("%d", &lenght);

      int area = width * lenght;  //area (multiplication) 

    if (width <= 0 || lenght <= 0) //it is "<=" not "=<"
    {
        printf("Please type in a valid value for width and lenght, only positive numbers (0 is not allowed)\n");
    } else {
         if (width == lenght)
    {
        printf("From the measures provided it is a square and the area is: %d\n", area);
    } else {
        printf("From the measures provided it is not a square\n");
    }
}

   /* if (width == lenght)
    {
        printf("From the measures provided it is a square\n");
    } else {
        printf("From the measures provided it is a rectangle\n");
    }
    
    int area = width * lenght; //area (multiplication)

    if (width == lenght)
    {
        printf("The area of the square is: %d\n", area);
    } else { 
         printf("The area of the rectangle is: %d\n", area);
    }   */

    return 0;
}