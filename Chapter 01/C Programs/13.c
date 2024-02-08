#include<stdio.h>
void main()
{
int s1, s2, s3, s4, s5;
float a;
printf("Enter marks in 5 subjects ");
scanf("%d%d%d%d%d",&s1,&s2, &s3, &s4, &s5); // read five integer inputs from the user
//calculate the percentage of marks in 5 subjects
a = (s1+s2+s3+s4+s5)*100/500.0;
// print the output on the screen
printf ("Percentage = %f ", a);
}
