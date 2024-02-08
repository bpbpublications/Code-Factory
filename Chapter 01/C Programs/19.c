#include<stdio.h>
void main()
{
float b, h, area;
printf("Enter base of a parallelogram ");
scanf("%f",&b); // read a float input from the user
printf("Enter height of a parallelogram ");
scanf("%f",&h); // read a float input from the user
//obtain area
area = b*h;
// print the output on the screen
printf("Area of ( %f X %f) is %f",b,h, area);
}
