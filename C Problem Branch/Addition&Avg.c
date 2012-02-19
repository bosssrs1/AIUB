/*1. Write a program that receives 5 integers and returns the sum and
average of these numbers. */

#include "stdio.h"

int main()
{
	/* code */
	puts("Welcome to the summation & avg calculator");
	int a,b,c,d,e,f,g;
	printf("Input your values:");
 	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
 	f = a+b+c+d+e;
 	g = (a+b+c+d+e)/5;
 	printf("The summation of these numbers are: %d\n",f);
 	printf("The average of these numbers are: %d\n", g);
	return 0;
}