
#include<stdio.h>
void main()
{
int i, n, x;
int max_no=0;
printf("Enter a numbers: " );
scanf("%d", &n);
printf("Enter %d numbers: ", n );
for(i =1; i<=n; i++)
{
scanf("%d", &x);
if (x > max_no)
max_no = x;
}
printf("The maximum number is %d", max_no );

}
