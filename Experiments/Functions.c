#include <stdio.h>
//up followoing we have an introduction to functions, for instance, we have void
/*functions are specially useful if u have to reuse a certain piece of code over and over (it is considered poor practice to copy and paste it over and over, if it
aint neccesary*/
void birthday()
{
    printf ("1");
    printf ("2");
    printf ("3");
    printf ("4\n");
}
int main (){            //the main is what the program calls first just to make clear that we wont be calling void just bc it appears at first in the code
    birthday();
    birthday();
    birthday();
    birthday();

    return 0;
}