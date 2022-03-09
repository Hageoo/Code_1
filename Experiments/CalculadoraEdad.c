#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){
   
    int edad;
    char nombre[5];
   
    printf ("\nIngresa tu edad\t");
    scanf ("%d", &edad);
    int z = edad * 12;      //uso de operadores aritméticos, en este caso multiplicación para calcular la edad en meses, días y horas
    int y = edad * 365;
    int a = edad * 8760;
    

    printf ("\nIngresa tu nombre\t");
    scanf ("%s", &nombre[0]);

    printf ("\nBienvenido %s\n", nombre);
    printf ("\nTu edad es %d años\n", edad); //no olvides de especificar la variable que tomará el lugar de "%d" depués de poner una coma, en este caso olvidé agregar "edad"
    printf ("\nEn meses tu edad es %d\n", z);
    printf ("\nEn días tu edad es %d\n", y);
    printf ("\nEn horas tu edad es %d\n", a);
    printf ("\nSi consideramos que en promedio una persona duerme la tercera parte de su vida...\n");
    float b = (float)z / 3;
    float c = (float)y / 3;
    float w = (float)a / 3;
    printf ("\nHas dormido %.3f meses", b);
    printf ("\nHas dormido %.3f días", c);
    printf ("\nHas dormido %.3f horas\n", w);
    float g = w / 3;
    float m = (float)g * 60;
    printf ("\nPersonal de enfermería, (turno nocturno)\nhas dormido %.3f horas\n", g);
    printf ("\nEn minutos sería: %.3f\n", m);

 
    return 0; 

}