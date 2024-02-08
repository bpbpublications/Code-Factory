#include<stdio.h>
void main()
{
float r, pie,area;
printf("Enter the radius of circle");
scanf("%f", &r); // read a float input from the user
//define value of pie
pie=3.14;
//find area of circle
area=pie*r*r;
// print the output on the screen
printf("Area of circle is %f", area);
}

