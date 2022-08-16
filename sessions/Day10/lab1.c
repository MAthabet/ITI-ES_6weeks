#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

char* disNum(uint32_t a);

int main()
{
    uint32_t a = 4532;
    uint8_t size = 4;
    uint8_t* b = disNum(a);

}

char* disNum(uint32_t a, uint8_t)
{
    char* arr = (char*) malloc(size * sizeof(char));
    
    for (uint8_t i = 0; i < size; i++)
    {
        arr[i] = a % 10 + '0'; 
    }

    return arr;
}