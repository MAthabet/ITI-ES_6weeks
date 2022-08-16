#include <stdio.h>

int main(){
    int arr[10];
    for (int i = 1; i < 11; i++){
        printf("Enter number %d ", i);
        scanf("%d", &arr[i-1]);
    }
    printf("value in reversed order");
    for(int i = 9; i > -1; i--){
        printf("\n%d", arr[i]);
    }
}