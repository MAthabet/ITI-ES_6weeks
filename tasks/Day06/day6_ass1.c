#include <stdio.h>
#include <stdint.h>

int main(){
    uint8_t x = 1 , y;
    uint8_t *const ptr1 = &x;
    uint8_t **ptr2 = &ptr1;

    printf("const ptr adress before change : %d, %p", ptr1, ptr1);
    printf("\nconst ptr adress using *ptr2 : %d", *ptr2);

    * ptr2 = &y;
    printf("\naddress of y = %d", &y);
    printf("\naddress of const ptr after change = %d", ptr1);

}
