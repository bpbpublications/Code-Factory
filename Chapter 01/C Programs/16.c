
#include<stdio.h>
void main()
{
int i, in, f;

printf("Enter height in inches ");
scanf("%d",&i); // read a float input from the user
//convert height given in inches to feet, inches
f=i/12;
in = i%12;
// print the output on the screen
printf("Your height is %d feet %d in", f, in);
}


