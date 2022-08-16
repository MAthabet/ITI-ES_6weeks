#include <stdio.h>
int power (int num, int pow);

int main(){
int num, pow;

printf("Enter the number : ");
scanf("%d", &num);
printf("Enter a power : ");
scanf("%d", &pow);

printf ("answer = %d", power(num,pow));
}

int power (int num, int pow){
int res = 1;
    for(int i = 0; i < pow; i++){
        res *= num;
    }
    return res;
}

