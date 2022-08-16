#include <stdio.h>
void drawPyramid(int height);

int main(){
    int h;
    printf("please enter the height of the pyramid : ");
    scanf("%d", &h);
    drawPyramid(h);
    return 0;
}

void drawPyramid(int height){

    for(int i = 0; i < height; i++){

        for(int j = 0; j < height-i-1; j++){
            printf(" ");
        }
        for(int j = 2*i+1; j > 0; j--){
            printf("*");
        }

        printf("\n");
    }

}