#include <stdio.h>
int array_sum(int *ptr, int size);
const int ARRAY_SIZE = 10;

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d", array_sum(arr, ARRAY_SIZE));
}

int array_sum(int *ptr, int size){
    int res = 0;
    while(size > 0){
        res += *ptr;
        ptr++;
        size--;
    }
    return res;
}