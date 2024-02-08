#include<stdio.h>
void main()
{
int quantity, amt;
float x;
printf("Enter no of products you purchased: ");
scanf("%d", &quantity);
amt=quantity * 120;
if(amt>5000)
{
x= amt-0.5*amt;
printf("Pls pay %f", x);
}
else if (amt>  1000)
{
x= amt-0.2*amt;
printf("Pls pay %f", x);
}
else
{
printf("Pls pay %d", amt);
}
}
