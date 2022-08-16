#include <stdio.h>
#include <stdlib.h>

long long int numberOfDigits(long long int x, int i);
int main(){
    long long int x;
    printf("Enter the number : ");
    scanf("%lld", &x);

    //printf("\n %d", x); //for debugging

    printf("\nnumber of digits : %d", numberOfDigits(x,0));
    return 0;
}

long long int numberOfDigits(long long int x, int i)
{
    if (x == 0) return (i<=0)? 1:i;
    x /= 10;
    i++;
    return numberOfDigits(x, i);
}