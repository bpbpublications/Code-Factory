#include<stdio.h>
void main()
{
int year;
printf("Enter year ");
scanf("%d", &year);
if (year%400 ==0)
printf("it is a leap year");
else if (year %100 != 0 && year%4 ==0)
printf("it is a leap year");
else
printf("it is not a leap year");
}

