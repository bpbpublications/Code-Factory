

#include<stdio.h>
void main()
{
int i, n;
int s=0;
n=20;
i=1;
while(i<=n)
{
if (i%2==0)
{ s=s+i; }
i=i+1;
}
printf("The sum is %d", s);
}


