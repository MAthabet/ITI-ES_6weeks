#include <stdio.h>

float avg(int arr[], int size);
int sum(int arr[], int size);
int ARRAY_SIZE = 10;

int main(){
    int arr[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++){
        printf("Enter number %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("sum = %d", sum(arr, ARRAY_SIZE));
    printf("\navg = %.2f", avg(arr, ARRAY_SIZE));
    
    return 0;
}

int sum(int arr[], int size){
    int res = 0;

     for (int i = 0; i < size; i++){
        res += arr[i];
    }

    return res;
}

float avg(int arr[], int size){
    
    return (float) sum(arr,size)/size;

}