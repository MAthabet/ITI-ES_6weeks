#include <stdio.h>

int main(){
    int userInput;
    printf(" Please enter number : ");
    scanf("%d", &userInput);
/*
    if(userInput % 2 == 0)
    {
        printf(" Number is even");
    }
    else
    {
        printf(" Number is odd");
    }
*/
    if(userInput&1) {
        printf(" Number is odd");
    }
    else {
        printf(" Number is even");
    }
    return 0;
}