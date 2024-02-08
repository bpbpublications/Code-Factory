//3.14
#include<stdio.h>
void main()
{
int i, n, t=9;
float s=0;
printf("Enter a numbers: " );
scanf("%d", &n);

for(i =1; i<=n; i++)
{
s=s+t;
t=t*10+9;
}

printf("The sum of the series is %f", s);

}


