#include <stdio.h>
#include <stdint.h>
typedef struct
{
    uint8_t ID;
    uint16_t salary;
}Employee;

int main(){
    uint8_t i;
    Employee Arr[2];
    for (i = 0; i < 2; i++){
        printf("enter emplyee with ID %d salary :", i+1);
        scanf("%d", &Arr[i].salary);
    }

     for (i = 0; i < 2; i++){
        printf("\nemplyee with ID %d salary is %d", i+1, Arr[i].salary);
    }
}
