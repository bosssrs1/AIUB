/* Write a program to find the maximum / minimum number from given three
numbers.*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
	/* code */
	printf("Write 3 numbers and I'll find the minimum and maximum numbers\n");
	int n1,n2,n3;
	scanf("%d%d%d",&n1,&n2,&n3);


	int min = (n1 < n2) ? ((n1 < n3) ? n1 : n3) : ((n2 < n3) ? n2 : n3);
	int max = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);

	printf("The max number is : %d \n", max);
	printf("The min number is: %d \n", min);
	return 0;
}