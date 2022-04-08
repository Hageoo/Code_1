#include <stdio.h>
//useful when it comes to using nodes

struct student //structure and name of the structure 
{
    int math; //storing data type integer 
    int english;
    float promedio; //storing data type floating 
    char* name; 
    char* group; //storing data type character
};

struct transporte //just the cookie cutter, rn it is not quite "structuring" the data 
{
    int llantas; 
    char* color;
    char* name;
};

int main ()
{
    struct student sonia = {10, 10, 10, "sonia", "A"}; //strings declared inside {}, "" must be placed for single characters
    struct student diego = {5, 7, 6.5, "diebo", "A"};

    struct transporte coche = {4, "negro", "Honda civic"};
    struct transporte autobus = {8, "morado", "Ruta 17"};
    struct transporte moto = {2, "blanca", "honda"};
    //show info
    printf("%s, %.1f\n", sonia.name, sonia.promedio);
    
    
    return 0;
}