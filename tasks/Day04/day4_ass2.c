#include <stdio.h>


int length(void);

int main(){

    
    printf("Length of string : %d", length());
}

int length(void){ 

    char input[100];

    printf("Enter a string : ");
    scanf("%s", &input);

    int i = 0;

    while(input[i] != '\0'){
        i++;
    }
    return i;
}