#include<stdio.h>
void main()
{
int n, s, rem;
printf("Enter n: ");
scanf("%d",&n);
s=0 ;
while(n>0)
{
		rem=n%10 ;
		s=s*10+rem ;
		n=n/10 ;
}
printf("The total sum of digits is: %d",s);
}
