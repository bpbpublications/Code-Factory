#include<stdio.h>
void main()
{
int n,m, p;
float a;
printf("Enter three numbers");
scanf("%d%d%d",& n,&m, &p); // read three integer inputs from the user
//find the sum of three numbers and divide it by 3
a = (n+m+p)/3.0;
// print the output on the screen
printf("Average =%f", a);
}

