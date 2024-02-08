#include<stdio.h>
void main()
{
int n, flag,i;
printf("Enter a number: ");
scanf("%d", &n);
if (n==1)
{
printf("it is neither prime or composite");
exit(1);
}
flag =0;
for (i=2; i<n;i++)
{
if(n%i==0)
{
flag =1;
break;
}
}
if (flag==0)
printf( "%d is a prime number", n);
else
printf("%d is not a prime number", n);
}
