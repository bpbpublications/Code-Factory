//3.6
#include<stdio.h>
void main()
{
int i, s=0;
float avg=0.0;
i=0;
while(i<10)
{
i=i+1;
s=s+i;
}
avg=s/10.0;
printf("The sum and average of first 10 natural numbers are : %d and %f", s, avg);
}

