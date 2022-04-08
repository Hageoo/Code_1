#include <stdio.h>

//input a = (50, 60, 60, 45, 70)
//Output : alternatingSums (a) = (180, 105).}
//for the size of an array we can do the following: sizeof(name_arr)/sizeof(name_of_arr[0])

void alternating_sum(int array[5], int len_array){
    int i = 0;
    int a = 0;
    while (i < len_array){
        a = a + array[i];
        i = i + 2;
    }
    int b = 0;
    i = 1;
    while (i < len_array){
        b = b + array[i];
        i = i + 2;
    }
    printf("{%d, %d}\n",a,b);
    return;
}


int main(){
    int people[5] = {50,60,60,45,70};
    alternating_sum(people,5);
    return 0;
}
