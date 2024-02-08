//3.7
#include<stdio.h>
void main()
{
int i, n;
int s=0;
printf("Enter a numbers: " );
scanf("%d", &n);
i=0;
while(i<n)
{
i=i+1;
s=s+i*i;
}
printf("The sum of square of first %d natural numbers is %d", n, s);
}
