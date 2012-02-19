/* Consider the room numbers of our campus -  423, 432, 441, 234, 534, 132. Here first digit represent campus number, second digit represent floor number and the third number represent room number in that floor. Write a program that will take a three digit number (like 423) and output the Campus, Floor, and Room Number according to the input.
Sample example: INPUT: 423   OUTPUT: Campus 4, Floor 2, Room 3.*/

#include "stdio.h"

int main(int argc, char *argv[]) {
    char campus,floor,room;
    printf("Enter the room code :");
    scanf("%c%c%c",&campus,&floor,&room);
    printf("Campus %c, Floor %c, Room %c.",campus,floor,room);
    return 0;
}
