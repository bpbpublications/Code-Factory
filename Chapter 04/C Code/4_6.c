#include<stdio.h>
void main()
{
int i, n=50;
int sumE=0;
int sumO=0;

i=1;
while(i<=n)
{
if (i%2==0)
{ sumE=sumE+i; }
else
{ sumO=sumO+i; }
i=i+1;
}
printf("Difference is %d ", sumE-sumO);
}
