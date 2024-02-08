#include<stdio.h>
void main()
{
int x;
printf("Enter a number ");
scanf("%d", &x);
if (x < 0)
printf("Number is negative");
else if (x == 0)
printf("Number is zero");
else
printf("Number is positive");

}


