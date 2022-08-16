#include <stdio.h>

int max(int x , int y, int z);

int main(){
    int x,y,z;
    printf("enter number 1: ");
    scanf("%d", &x);
    printf("enter number 2: ");
    scanf("%d", &y);
    printf("enter number 3: ");
    scanf("%d", &z);
    printf("max num is %d",max(x,y,z));
    return 0;
}

 int max(int x , int y, int z){
    

    if (x>y){
        if (x>z){return x;}
        else return z;
    }
    else{
        if (y>z) {return y;}
        else return z;
    }
 }