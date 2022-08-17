#include <stdio.h>

int factorial(int x, int res);

int main(){
    int x;
    printf("ُ\n Enter number : ");
    scanf("%d", &x);

    printf("%d",factorial(x,1));
    return 0;    
}
int factorial(int x, int res){
    if (x == 1) return res;
    res *= x;
    x--;
    return factorial(x, res);
}
