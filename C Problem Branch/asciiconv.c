/* Write a program that takes a character as input and outputs the ASCII
 value of that character.*/

#include "stdio.h"

int main(int argc, char *argv[]) {
    char c;
    int a;
    printf("Enter the char : ");
    scanf("%c",&c);
    a = (int)c;
    printf ("The ascii value of %c is %d.\n",c,a);
    return 0;
}
