#include <stdio.h>
#include "def_lab1\std_int.h"
void countInc(){
    static int8_t count;
    count++;

    printf("\n count = %d ", count);
    
}
int main(){
    //printf("unsigned char = %d byte", sizeof(int8_t));
    countInc();
    countInc();
    countInc();
}