/*8. Let consider the conversion rate of US Dollar and Taka are 1 dollar =
/*80.45 taka. Write a program that first takes the choice from the user what
/*conversion (hint 1 for dollar to taka or 2 for taka to dollar) he/she wants.
/*Then an amount is given as input. Convert the amount and output the result
/*according to the given choice.*/

#include "stdio.h"
int main ()
{
    float cr = 80.35;
    float taka;
    float dollar;
    int chc;
    printf("Please Enter Your Choice: \n1. Taka to Dollar\n2. Dollar to Taka\n : ");
    scanf("%d",&chc);
    if (chc == 1){
        printf("Please enter the amount of taka : ");
        scanf("%f",&taka);
        dollar = taka / cr ;
        printf("Equivalent of %f taka is %f dollar.\n",taka,dollar);
        
    }
    else if (chc == 2) {
    printf("Please enter the amount of dollar : ");
    scanf("%f",&dollar);
    taka = dollar * cr ;
    printf("Equivalent of %f dollar is %f taka.\n",dollar,taka);
       
    }
    else {
        printf("You need to choice either 1 or 2, got it ?\n");
        return 0;
    }
}