#include <stdio.h>

int stringDetails(char str[]);

int main(){
    char string[100];
    printf(" Enter line of string: ");
    gets(string);
    stringDetails(string);
}

int stringDetails(char str[]){

    int i = 0;
    int numv = 0;
    int numc = 0;
    int numws = 0;
    int numn = 0;

    while(str[i] != '\0'){
        if(str[i] > 64 && str[i] < 91 || str[i] > 96 && str[i] < 123){
            if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' ||
             str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U'){
                numv++;
            }
            else numc++;
        }
        else if (str[i] > 47 && str[i] < 58) numn++;
        else if (str[i] == 32) numws++;
        i++;
    }
    printf(" Vowls : %d", numv);
    printf("\n cons : %d", numc);
    printf("\n numbers : %d", numn);
    printf("\n white spaces : %d", numws);

}
