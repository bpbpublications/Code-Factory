#include<stdio.h>
void main()
{
int x;
printf("Enter a number ");
scanf("%d", &x);
if ((x%7 ==0) && (x%5==0))
{ printf("Number is divisible by 7 and 5 both");	}
else
{ printf("it is not divisible by 7 and 5 both ");}
}




