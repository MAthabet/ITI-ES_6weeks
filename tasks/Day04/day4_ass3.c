#include <stdio.h>


void swap(void);

int main(){
    swap();
    return 0;
}

void swap(void){
    char name1[] = "ali";
    char name2[] = "mohamed";
    char temp[8];

    int i = 0;
    
    while(name2[i] != '\0'){
        temp[i] = name1[i];
        name1[i] = name2[i];
        name2[i] = temp[i];
        i++;
    }
    printf("%s \n%s", name1, name2);
}