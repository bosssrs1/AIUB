/* Any year is entered through the keyboard. Write a program to
 determine whether the year is a leap year or not.*/

#include "stdio.h"	

int main()
{
	/* code */
	int year;
	printf("Enter the year:\n");
	scanf("%d",&year);
		/*
    	**    The logic is that the year is either divisible by both
    	**    100 and 4 , OR its only divisible by 4 not by hundred
    	*/
    if (year%400==0 || (year%100 != 0 && year%4==0))
    {
    	printf("Year %d is a leap year\n", year);
    }
    else
    {
    	printf("Year %d is not a leap year\n", year);
    }
	return 0;
}
