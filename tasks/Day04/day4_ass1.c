#include <stdio.h>

int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);
int and(int x, int y);
int or(int x, int y);
int not(int x);
int xor(int x, int y);
int reminder(int x, int y);
int increment(int x);
int decrement(int x);

int main(){
    int ID, x, y = 1;
    printf("%d", !0);
    printf("Enter the operation ID (1-11): ");
    scanf("%d", &ID);
    while(ID > 11 || ID < 1){
        printf("please enter number between 1-11 : ");
        scanf("%d", &ID);
    }

    if (ID == 7 || ID == 10 || ID == 11){
        printf("enter the oberand : ");
        scanf("%d", &x);
    }
    else {
        printf("enter the 1st oberand  : ");
        scanf("%d", &x);
        printf("enter the 2nd oberand : ");
        scanf("%d", &y);
    }    
    
    int arr[] = {
        add(x, y), subtract(x, y), multiply(x, y), divide(x, y), and(x, y), or(x,y), not(x), xor(x, y), reminder(x, y), increment(x), decrement(x)
    };
printf("%d", y);
    printf("result = %d", arr[ID-1]);
    return 0;
}

int add(int x, int y){
    return x+y ;
}
int subtract(int x, int y){
    return x-y;
}
int multiply(int x, int y){
    return x*y;
}
int divide(int x, int y){
    if (y == 0) {
        printf("Erroe devision by zero \nplease choose another divisor : ");
        scanf("%d", &y);
    }

    return x/y;
}
int and(int x, int y){
    return x&y;
}
int or(int x, int y){
    return x|y;
}
int not(int x){
    return !x;
}
int xor(int x, int y){
    return x^y;
}
int reminder(int x, int y){
    return x%y;
}
int increment(int x){
    return ++x;
}
int decrement(int x){
    return --x;
}