#include<stdio.h>
void main()
{
float F1, C1;
printf("Enter temperature in degree F ");
scanf("%f",&F1); // read a float input from the user
//convert temp on F to C
C1= (F1-32)*5/9.0;
// print the output on the screen
printf("Temperature in degree Celsius is %f", C1);
}
