#include <stdio.h>

int getMax(int num1, int num2);
int main(){
    int x,y;
    printf("enter value 1 : ");
    scanf("%d", &x);
    printf("enter value 2 : ");
    scanf("%d", &y);
    printf("%d",getMax(x,y));
}
int getMax(int num1, int num2){
    if(num1 < num2) return num2;
    return num1;
}