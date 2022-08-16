#include <stdio.h>
int main(){
int userInput, counter = 1;
printf("\nEnter the number of rows of Floyd's tringle to print : ");
scanf("%d", &userInput);
for(int i = 1; i <= userInput; i++){
    for (int j = 1; j <= i; j++){
        printf("%d ", counter++);
    }
    printf("\n");
}
}