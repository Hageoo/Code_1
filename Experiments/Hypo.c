#include <stdio.h>
#include <math.h>

int main (){
    double a;
    double b;
    double c;

    printf("\nHypotenuse caluclator\nEnter a value for a: ");
    scanf("%lf", &a);

    printf("\nEnter a value for b: ");
    scanf("%lf", &b);

    c = sqrt(a*a + b*b); /*in this case my square root was not working since i did not specify where to retrieve from the "math.h" library
    when compiling add *-lm* at the end since this one links it with the library called "libm.so" it also works with a ".a"*/
    printf("\nHere is your result: %lf\n", c);

    return 0;
}