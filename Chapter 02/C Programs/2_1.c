#include<stdio.h>
#include<math.h>
void main()
{
int n;
printf("Enter the value of n: ");
scanf("%d", &n);
if(n >= 0)
printf("%d", n);
else
printf("%d",-1*n);
}
