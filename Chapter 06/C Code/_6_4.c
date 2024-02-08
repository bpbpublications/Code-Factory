#include<stdio.h>
void main()
{
char x,y;
fflush(stdin);
printf("Enter signs of the game: s for scissor, p for paper, r for stone: ");
scanf("%c", &x);
fflush(stdin);
scanf("%c", &y);

if ((x== 's' && y== 'p') || (x== 'r' && y== 's') || (x== 'p' && y== 'r'))
		printf( "x is the winner");
if ((y== 's' && x== 'p') || (y== 'r' && x== 's') || (y== 'p' && x== 'r'))
		printf("y is the winner");
if ((x== 's' && y== 's') || (x== 'r' && y== 'r') || (x== 'p' && y== 'p'))
		printf( "There is a tie");
}

