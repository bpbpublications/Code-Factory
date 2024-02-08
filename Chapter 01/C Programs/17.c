#include<stdio.h>
void main()
{
float l,b, area;
printf("Enter two sides of a rectangle (in meters)");
scanf("%f%f",&l, &b); // read two float inputs from the user
//obtain area by multiplying length and breath
area = l*b;
// print the output on the screen
printf("Area of ( %f X %f) is %f sq meter",l,b, area);
}

