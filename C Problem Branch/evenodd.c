/*Write a program to find a given number is even or odd.*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
	int a;
	printf("Input your number here: \n");
	scanf("%d",&a);
	if (a%2==0)
	printf("Even number\n");
	else
	printf("Odd number\n");
	return 0;
}