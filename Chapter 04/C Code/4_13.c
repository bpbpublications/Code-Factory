#include<stdio.h>
#define min(n,m) n<m?n:m

void main()
{
int n,m,hcf,i;
printf("Enter 2 numbers: ");
scanf("%d%d", &n, &m);

hcf=1;
for (i=min(n,m); i>1; i--)
{
if (n>=i  && m >=i)
{
if (n%i ==0 && m%i == 0)
{
n=n/i;
m=m/i;
hcf=hcf*i;
}
}
else
break;
}
printf("HCF is %d", hcf);
}
