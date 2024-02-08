#include<stdio.h>
void main()
{
int i, n;
int s=0;
printf("Enter a numbers: " );
scanf("%d", &n);
i=1;
while(i<=n)
{
s=s+i;
i=i+1;
}
printf("Sum is %d\n", s);
if (s%2==0)
    {printf("EVEN");}
else
    {printf("ODD");}
}
