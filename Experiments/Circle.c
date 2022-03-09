#include <stdio.h>
#include <math.h>

int main (){

    const double PI = 3.1416;
    double radius; 
    double circumference;
    double area;
    printf("\nCircumference calculator, type the radius of a circle:\n");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;   
    printf ("\nCircumference of the circle: %lf", circumference);

    area = PI * radius * radius;
    printf ("\nArea of the circle: %lf\n", area);

}