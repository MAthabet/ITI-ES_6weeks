#include <stdio.h>

int main(){
    int x = 10;
    printf("x beofre change = %d", x);
    int *ptr = &x;
    *ptr = 20;
    printf("\nx after change = %d", x);
}