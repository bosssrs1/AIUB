//The same 3 numbers problem made easier.

#include "stdio.h"

int main ()
{
	int a,b,c;
	printf("Enter the first number\n %d" , &a);
	printf("Enter the second number\n %d" , &b);
	printf("Enter the third number\n %d" , &c);

	if (a < b) 
      if (a < c) 
         if (b < c) 
            printf("%d%d%d\n", a,b,c);
            else if
            printf("%d%d%d\n", a,c,b);
            return 0;
}