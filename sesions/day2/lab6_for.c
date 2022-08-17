#include <stdio.h>

int main(){
    int sum = 0;
    int userInput;
    printf("enter the 10 number");
    for( int i = 0; i < 10; i++){
        printf("Number-%d :", i);
        scanf("%d",&userInput);
        sum += userInput;
    }
    printf("\nthe sum of 10 number = %d",sum);
    printf("\n avg = %f",(float) sum/10);
    return 0;
}