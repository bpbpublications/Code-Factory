//3.12
#include<stdio.h>
void main()
{
int i, n;
int s=0;
printf("Enter a numbers: " );
scanf("%d", &n);

for(i =1; i<=n; i++)
 {
     s=s+2*i-1;

 }
printf("The sum of the series is %d", s);

}
