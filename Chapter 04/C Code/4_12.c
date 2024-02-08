
#include<stdio.h>
#include<math.h>
#define min(n,m) n<m?n:m

void main()
{
int n,m,lcm,i;
printf("Enter 2 numbers: ");
scanf("%d%d", &n, &m);
lcm=1;
for (i=min(n,m); i>1; i--)
{
if (n>=i  && m >=i)
{
if (n%i ==0 && m%i == 0)
{n=n/i;
m=m/i;
lcm=lcm*i;
}
}
else
break;
}
if (n!=0)
lcm = lcm*n;
if (m!=0)
lcm = lcm*m;
printf("LCM is %d", lcm);
}
