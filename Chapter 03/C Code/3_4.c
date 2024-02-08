//3.4
#include<stdio.h>
void main()
{
int i, n, m;
printf("Enter two numbers: " );
scanf("%d%d", &n, &m);
i=n;
while(i<=m)
{
printf (" %d", i*i*i);
i=i+1;
}
}
