#include<stdio.h>
void main()
{
int a, b,c;
printf("Enter 3 numbers: ");
scanf("%d%d%d", &a, &b, &c);
if (a>b)
{
	if (b>c)
		printf( "%d is largest", a);
	else if (a>c)
		printf( "%d is largest", a);
	else
		printf( "%d is largest", c);
}
else
{
	if (a>c)
		printf( "%d is largest", b);

	else if ( b>c)
		printf( "%d is largest", b);
    else
		printf( "%d is largest", c);
}
}


