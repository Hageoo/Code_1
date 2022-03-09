#include <stdio.h>
// a for loop: we need to state at first the "range" of our loop, for instance we have 1 to 10 and in the third statement we have that it will count from 1 to 10 by 1
int main (){
     for (int index = 1; index <= 10; index++) //the "index" can also be replaced with an "i" (in the first statement we have some sort of counter (index = 1))
     {                      // in the second one we have a condition (how long should we continue to repeat this code)
       printf ("%d\n", index);                     // in the third statement we can either increment or decrement our counter 
     }
     return 0;
}