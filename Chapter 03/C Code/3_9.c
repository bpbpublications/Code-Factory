//3.9
#include<stdio.h>
void main()
{
int i, n;
int p=1;
printf("Enter a numbers: " );
scanf("%d", &n);
i=1;
while(i<=n)
{
p=p*2;
i=i+1;
}
printf("The 2^%d is %d", n, p);
}
