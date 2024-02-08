#include<stdio.h>
void main()
{
int sal;
float HRA, DA;
printf("Enter your basic salary ");
scanf("%d", &sal);
if (sal <= 10000)
{
HRA = 0.2 * sal;
DA = 0.8*sal;
}
else if (sal <= 20000)
{
HRA = 0.25*sal;
DA =0.9*sal;
}
else
{
HRA = 0.3*sal;
DA =0.95*sal;
}
printf("Gross Salary is %f", sal+HRA+DA);
}
