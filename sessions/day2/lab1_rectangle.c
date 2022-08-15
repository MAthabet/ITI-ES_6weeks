// Goal is to make simple calculator for rectangle area and circumference

#include <stdio.h>

int main(){
    int h,w;
    printf(" Please enter the hight : ");
    scanf("%d",&h);
    printf(" Please enter the width : ");
    scanf("%d",&w);

    printf(" area equals to : %d \n", w*h);
    printf(" circumference equals to : %d", (w+h)*2);

    return 0;
}
