#include<stdio.h>
#include<math.h>
void main()
{
int n, ar, m, rem, a[10];
for(m=0;m<=999;m++)
{
n=m;
int i=0;
int j=0;
int ar=0;
while(n>0)
{
		rem=n%10 ;
		a[i]=rem ;
		n=n/10 ;
		i=i+1;
}

while (j<i)
{
    ar=ar+pow(a[j],i);
    j=j+1;
}

if( ar == m)
		printf("%d ", m);
}
}

