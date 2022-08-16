#include <stdio.h>
#include <stdlib.h>

int main(){
    char operator;
    float num1 , num2, result;

    while(1){
    printf("Enter an operator (+, 0, *, /):");
    fflush(stdin);
    scanf("%c", &operator);
    printf("Enter two numbers : ");
    scanf("%f",&num1);
    scanf("%f",&num2);
    switch(operator){
        case +: result = num1 + num2;
        break;
        case -: result = num1 - num2;
        break;
        case *: result = num1 * num2;
        break;
        case '/': result = num1 / num2;
        break;
    }
    printf("%.1f %c %.1f = %.1f\n", num1, operator, num2, result);
    }
    return 0;
}