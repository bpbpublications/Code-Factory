#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter 3 sides of a triangle: ");
scanf("%d%d%d",&a,&b,&c);
if (a==b && b==c)
printf("It is an equilateral triangle: ");
else if (a==b || b==c || c==a)
printf("It is an isosceles triangle");
else
printf("It is a scalene triangle");
}
