#include <stdio.h>
const int hourRate = 50;
const float deduction = 0.9;
int main(){
    int workingHours,wage;
    printf(" Please enter your working hours : ");
    scanf("%d", &workingHours);
    wage = hourRate * workingHours;

    if(workingHours < 40 )
        {
        wage = (float) wage * deduction;
        }

        printf(" Your slaray is : %d",wage);

    return 0;
}