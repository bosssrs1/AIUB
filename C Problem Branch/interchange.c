/* Write a program to interchange the value of two variables, say x and y.*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
	printf("Welcome to the variable exchange calculator.\n");
	printf("Please assign a value to the variable X and Y\n");
	int x,y; //1 2
	scanf("%d%d", &x,&y);
	x=x+y; //1+2=3
 	y=x-y; //3-2=1
 	x=x-y; //3-1=2
	printf("Here's the value, interchanged. x=%d , y=%d\n", x,y);
	return 0;
}