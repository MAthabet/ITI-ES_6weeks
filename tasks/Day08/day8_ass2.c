#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void printArray(uint8_t arr[], uint8_t size);

int main()
{
    uint8_t i, size, *ptr;
    printf("Enter array size : ");
    scanf("%d", &size);
    ptr = (uint8_t *) malloc(size * sizeof(uint8_t));

    for (i = 0; i < size; i++){
        printf("Enter number %d of array: ", i+1);
        scanf("%d", &ptr[i]);
    }

    printArray(ptr, size);
    
}

void printArray(uint8_t arr[], uint8_t size)
{
     for (int i = 0; i < size; i++){
        printf("elemnt %d : %d\n", i+1, arr[i]);
    }
}
