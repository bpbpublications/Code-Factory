#include<stdio.h>
void main()
{
float m, cm;
printf("Enter length in meters");
scanf("%f",&m); // read a float input from the user
//to convert meter in cm, multiply it by 100
cm = m*100;
// print the output on the screen
printf("Length in cm is %f", cm);
}
