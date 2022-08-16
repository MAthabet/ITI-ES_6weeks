#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void sort(uint8_t arr[], uint8_t size);

int main()
{
    uint8_t i, size, *ptr;
    printf("Enter the number of numbers : ");
    scanf("%d", &size);
    ptr = (uint8_t *) malloc(size * sizeof(uint8_t));
    for (i = 0; i < size; i++){
        printf("Enter number %d : ", i+1);
        scanf("%d", &ptr[i]);
    }
    sort (ptr, size);
    for(int i = 0; i < size; i++){
        printf("%d\n", ptr[i]);
    }
}

void sort(uint8_t arr[], uint8_t size)
{
     for (int i = 0; i < size; i++){
        for (int j = i; j<size; j++){
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
