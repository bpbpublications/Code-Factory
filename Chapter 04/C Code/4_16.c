#include<stdio.h>
void main()
{
int a[50], f[50], n,count, i, j;

printf("Enter the size of list: ");
scanf("%d", &n);
for( i =0; i<n; i++)
{
scanf("%d", &a[i]);
f[i]= -1;
}
for( i =0; i<n; i++)
{
count=0;
if (f[i] == 1)
continue;
for( j =0; j<n; j++)
{
if (a[i]==a[j])
{
f[j]=1;
count=count+1;
}
}
printf("\nFrequency of %d is %d ", a[i], count);
}
}
