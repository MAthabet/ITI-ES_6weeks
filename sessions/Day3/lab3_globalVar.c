#include <stdio.h>
int x = 10;
int y = 20;

void swap(void);

int main(){
    printf("X before swap = %d", x);
    printf("\ny before swap = %d", y);
    swap();
    printf("\n");
    printf("\nX after swap = %d", x);
    printf("\ny after swap = %d", y);

    return 0;    
}
void swap(void){
    int temp = x;
    x = y;
    y = temp;
    return;
}
