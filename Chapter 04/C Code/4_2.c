
#include<stdio.h>
void main()
{
int i, n, m;
printf("Enter two numbers: " );
scanf("%d%d", &n, &m);
i=n;
while(i<=m)
{
if (i%2 !=0)
{ printf("%d ", i); }
i=i+1;
}
}
