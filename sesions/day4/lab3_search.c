#include <stdio.h>

int search(int arr[], int num, int end, int start);
int ARRAY_SIZE = 10;

int main(){
    int arr[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++){
        printf("Enter number %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    return 0;
}

int search(int arr[], int num, int end, int start){
    int mid = (end+start)/2;
    if(start > end) return 0;
    if (arr[mid] == num) return 1;
    if (num > arr[mid]) return search(arr, num, end, mid+1);
    
    return search(arr, num, mid-1, start);
}
