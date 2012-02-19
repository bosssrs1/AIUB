#include<stdio.h>
#include<stdlib.h>

int main ()
{
char buffer[256];
char * ptr_end;
long int x;
printf("Insert the number X to see if 100<X<250 and X/7:");

gets(buffer);
x = strtol (buffer,&ptr_end,10);

if (!(buffer[0]<48 ||buffer[0]>57))
{
printf("Result: ");
if(x<100 && x<250 && x%7==0){printf("The number is less than 100 and divisible by 7\n");}
else if(x<100&&x<250&&x%7!=0){printf("The number is less than 100 and not divisible by 7\n");}
else if(x>100&&x<250&&x%7==0){printf("100<X<250 & X/7\n");}
else if(x>100&&x<250&&x%7!=0){printf("100<X<250 & X/7\n");}
else if(x>100&&x>250&&x%7==0){printf("The number is greater than 250 and divisible by 7\n");}
else if(x>100&&x>250&&x%7!=0){printf("The number is greater than 250 and not divisible by 7\n");}
}
else
{
{printf("\nBaaler pola tore eida input dite koisi 3:@ ?????\n");}
}

return 0;
}
