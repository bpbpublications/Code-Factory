
#include<stdio.h>
void main()
{
int i, n, x;
int c=0;
printf("Enter a numbers: " );
scanf("%d", &n);
printf("Enter %d numbers:", n);
for(i =1; i<=n; i++)
{
scanf("%d", &x);
if(x%2==0)
c=c+1;
}

printf("There are %d even numbers", c);

}
