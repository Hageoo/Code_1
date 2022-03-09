#include <stdio.h>
// we have to specify the type of data stored in that variable, so we do the following
//any varibale declared outside "main" will be considered as a global variable 

int main(){
    //declaring variables inside main will turn them in local variables 
    int x; //declaring my variable          
    x = 123; //initiallizing my variable by assigning a value to it
    int y = 321; //both steps combined here

    int age = 18; //for instance, my age could be an integer (variable) (%d)
    float pib = 2.5; //a floating one is pretty much the same thing but with decimal point and numbers (%f)
    char grade = 'A'; //in this case the char is holding a single character so its specified between '' (%c)


    char Astr[3]= {'A', 'B', 'C'};
    /* Astr[1] = B, Astr[1] >> 'B':  el uno viene del index dependiendo del orden de los datos alojados en los corchetes de la declaración de la variable,
     index 0-1-2-3-4-5 
     char* = es un string, una cadena o un caracter y tiene reservado una pieza de memoria más adelante de el porque es un puntero 
     ejemplo : char* myPtr = "Ajo" {'A', 'J', 'O'}, esto solo es posible cuando la variable está siendo declarada al principio del código
     también es posible reservar memoria de la sig forma = char otroStr[2]; en este ejemplo está declarado el tamaño
     char* twoStr; es posible que declarando de esta manera nos arroje algún error si se requiere insertar más códgio de alguna forma en un futuro,
     por ende, es recomendable reservar memoria entre los corchetes.        "malloc" =      m: memory     alloc: alojar 
     malloc (sizeOf(char)*250)  -  malloc (sizeOf(int)*250); de esta forma se puede prevenir los errores con el caso anterior, (se multiplica char por 250, para reservar los 250)
     el de los corchetes me limita al querer modificar el valor del string, en comparación con los punteros (char*);
     el uso de punteros puede ser más flexible, ya que modificar el arreglo dentro de los corchetes no es tan dinámico como en python;
     data structures, con punteros siempre se puede modificar el espacio ocupado por la variable. char * - kind of a pointer
     visión artificial - procesamiento digital de imagenes

        5||2||3
        
     for, while, DoWhile, 
     para iterar el tamaño completo del arreglo, for (int index = 0; index < lenght; index = index + 1;)
                                                {
                                                    myArr[index] = myArr[index] * 2; // = 10||4||6
                                                }
                                                
       */


    char MyString[] = "Hageo"; // this one is also a char but since it is also including "[]" then we can have an array (multiple characters located between "") (%s)
    char example = {1, 2, 3}; //propiedad lenght, longitud del arreglo de principio a fin. Index: 0-1-2, siempre empiezan en 0
    const float PI = 3.141618; /* we will be unsing this line of code for a constant, a value that cannot be altered by the program during its execution with "const" (%d)
    it is also considered as good practice to name the variable in upper case*/
     
     //printf ("You are 'age' years old");
     printf ("You are %d years old\n",age); //previously we already stated the value of the variable "age", so in this line of the code we call that value by using a coma after specifiying the place where it should be called with a "%d"
}

//some notes about the content of these types of variable holders}
// the floating one can store between 6 and 7 digits, we hold the place of it with "%f"
// for a double (for example: double d = 3.142987347698), it can store of to 15-16 digits, we hold the place with "%lf" lf is from long float, we can also expand the amount of digits being printed by adding "%0.15lf" this will make the variable print 15 extra digits
// doubles are way more common since they are just an enhanced version of the floating one, however, it occupies a twice as more memory compared to the floating (8 bytes for the long floating and 4 bytes for the regular floating)
// boolean type uses a single byte of memory, and it is pretty much a validator 1=true and 0=false
// char, it can hold an integer between -128 to +127, and it also only consumes a single byte (%d (for numbers), %c (to display a letter based on the number specified in the variable))
// with unsigned char, we ignore negative numbers and we can store an number between 0 and +255 (only if we are sure that we will not be using a negative number
// if we go beyond the maximum range of char or unsigned char it will overflow returning the value to 0
// short int, this type of data has a range of -32,768 to +32,767, the unsigned version of this one (unsigned short int) goes from 0 to +65,535 and is stored in 2 bytes
// overflowing will cause it to return it to the minimum value in the range of it
// short = short int, unsigned short int = unsigned short (%d)
// int, goes from negative 2 billion to barely over postive 2 billion, it uses 4 bytes of memory, the unsigned version of this one goes up to positive 4 billion (%d or %u)
// long long int, goes from -9 quintillion to just over +9 quintillion, (%lld), unsigned goes from 0 to +18 quintillion (%llu or %lld), this last one prob u wont be dealing with it as often as the other ones, but if you are dealing with the speed og light maybe it can come in handy