#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct
{
    //uint8_t ID;
    uint16_t math;
    uint16_t language;
    uint16_t physics;
    uint16_t chemistry;
} student;

int main(){
    printf("%d", sizeof(student));
   /* student arr[10];
    uint8_t i = 0;
    for(; i < 10; i++){
        arr[i].ID = i+1;
        arr[i].math = rand() % 100;
        arr[i].language = rand() % 100;
        arr[i].physics = rand() % 100;
        arr[i].chemistry = rand() % 100;
    }


    while(i != 0){ 
        printf("\n please Enter student ID : ");
        scanf("%d", &i);
        if(i < 11 && i > 0){
            printf("Math grade : %d", arr[i].math);
            printf(" \nlanguage grade : %d", arr[i].language);
            printf("\n physics grade : %d", arr[i].physics);
            printf(" \nchemistry grade : %d", arr[i].chemistry);
        }
        else if (i == 0) printf("exiting...");
        else printf(" student ID is wrong\n");

    }*/
}