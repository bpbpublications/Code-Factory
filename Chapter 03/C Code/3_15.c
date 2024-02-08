//3.15
#include<stdio.h>
void main()
{
int i;
int s=0;
int x,n;

printf("Enter a numbers: " );
scanf("%d", &n);
printf("Enter %d numbers: ",n );
for(i =1; i<=n; i++)
{
scanf("%d", &x);
s=s+x;
}

printf("The sum is %d", s);

}

