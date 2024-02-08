/*
Identify a living creature (Human, Bird and Animal) on the basis
of features like number of legs and feathers.
*/
#include<stdio.h>

int main()
{
int l;
char f;

printf("Enter the number of legs: ");
scanf("%d", &l);

fflush(stdin);

printf("Enter if it has feather: ");
scanf(" %c", &f);


if(l == 2)
{
    if (f == 'y')
        printf("Bird");
    else
        printf("Human");
}
else if(l == 4)
{
    if(f == 'n')
        printf("Animal");
    else
        printf("No such creature exists.");
}
else
	printf("No such creature exists.");
return 0;
}
