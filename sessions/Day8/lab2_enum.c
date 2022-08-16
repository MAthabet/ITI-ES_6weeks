#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

enum Days
{
    saturday = 1,
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
};

int main()
{
    enum Days x;
    x = 1;
    switch(x){
        case saturday:
        printf("%d", x);
        break;
    }
    
}

