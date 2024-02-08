//3.16
#include<stdio.h>
void main()
{
int n,x,y,z;
printf("Enter n:");
scanf("%d", &n);
x=1;
y=1;
printf("%d", x);
printf(" %d", y);
for (int i=3; i<=n; i++)
{
z=x+y;
printf(" %d", z);
x=y;
y=z;
}}

