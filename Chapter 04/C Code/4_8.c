#include<stdio.h>
void main()
{
int i, x;
int max_no=0;
int n=5;
printf("Enter 5 numbers: ");
for(i =1; i<=n; i++)
{
scanf("%d", &x);
if (x > max_no)
max_no = x;
}
printf("The maximum number is %d", max_no );
}
