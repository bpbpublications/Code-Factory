//3.10
#include<stdio.h>
void main()
{
int i, n, x;
int p=1;
printf("Enter two numbers: " );
scanf("%d%d", &n, &x);
i=1;
while(i<=n)
{
p=p*x;
i=i+1;
}
printf("The %d^%d is %d",x, n, p);
}
