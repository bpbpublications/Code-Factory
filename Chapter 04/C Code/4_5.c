
#include<stdio.h>
void main()
{
int i=100;
int s=0;

while(i <=200)
{
if (i%9 ==0)
{s=s+i;}
i=i+1;
}
printf("Sum is %d", s);
}


