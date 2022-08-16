#include <stdio.h>
#include <stdint.h>
#define add(x, y) (x + y)
#define sub(x, y) (x - y)
#define multibly(x, y) (x * y)
#define divide(x, y) (x / y)

int main(){
    uint8_t num1, num2;

    printf("Enter number : ");
    scanf("%d", &num1);
    printf("Enter anothrer number : ");
    scanf("%d", &num2);

    uint8_t addAns = add(num1, num2);
    uint8_t subAns = sub(num1, num2);
    uint8_t multiblyAns = multibly(num1, num2);
    uint8_t divideAns = divide(num1, num2);
    printf("answer of adding the 2 numbers is : %d", addAns);
    printf("\nanswer of substracting the 2 numbers is : %d", subAns);
    printf("\nanswer of multipling the 2 numbers is : %d", multiblyAns);
    printf("\nanswer of dividing the 2 numbers is : %d", divideAns);
}
