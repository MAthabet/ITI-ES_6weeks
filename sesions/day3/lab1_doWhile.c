#include <stdio.h>

int main(){
    int x, res =1;

    printf("Enter an integer : ");
    scanf("%d",&x);

    do{
        res *= x;
        x--;
    }while(x>1);

    printf("%d",res);
    
    return 0;
}