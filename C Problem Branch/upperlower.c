/* Input a character. If the character is between ‘A’-‘Z’ convert to small
letter. If the character is between ‘a’-‘z’ convert to capital letter.*/

#include <stdio.h>
#include <ctype.h>
int main(int argc, char *argv[]) 
{
    char chr;
    char chrf;
    printf("Enter the char: ");
    scanf("%c",&chr);
    
    if (islower(chr)) 
        chrf=toupper(chr);
    else if (isupper(chr)) 
        chrf=tolower(chr);
    
    printf("Converted form of %c is %c",chr,chrf);
}