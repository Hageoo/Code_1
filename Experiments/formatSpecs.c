#include <stdio.h>

int main(){
    //format specifiers - %c = character - %s = string (array of characters) - %f = float - %lf = double - %d = integer 
    float item = 5.566;
    float item2 = 6.566;
    float item3 = 8.566; 

    //decimal precision = %.1 (example) you might be usign a different number after the point depending on how many numbers you need after the decimal point
    //minimum field width = %1  (example) depending on the alignment you want, you might use a "-" before the number to align it to the left 

    printf("item 1: $%100.2f\n", item);
    printf("item 2: $%-100.2f\n", item2);
    printf("item 3: $%100.2f\n", item3);
}