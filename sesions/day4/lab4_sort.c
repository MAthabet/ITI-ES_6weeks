#include <stdio.h>

void sort(int arr[], int size);
int ARRAY_SIZE = 10;

int main(){
    int arr[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++){
        printf("Enter number %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    sort(arr,ARRAY_SIZE);
    
    for(int i = 0; i < ARRAY_SIZE; i++){
        printf("\n %d", arr[i]);
    }
    
    return 0;
}

void sort(int arr[], int size){

     for (int i = 0; i < size; i++){
        for (int j = i; j<size; j++){
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

}
