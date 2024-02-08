//3.8
#include<stdio.h>
void main()
{
int i, n;
int p=1;
printf("Enter a numbers: " );
scanf("%d", &n);
i=0;
while(i<n)
{
i=i+1;
p=p*i;
}
printf("The factorial of %d is %d", n, p);
}

