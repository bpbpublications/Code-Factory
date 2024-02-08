#include<stdio.h>
void main()
{
int x,y;
printf("x y x and y x or y not x");
//first time value of x & y is 0
x=0;
y=0;
// && is to perform bitwise ANd operation, || performs OR operation, ! perform NOT operation
printf ("\n%d %d %d %d %d",x, y, x&&y, x||y, !(x));
//then, values of x & y are set to 0 & 1
x=0; y=1;
printf ("\n%d %d %d %d %d",x, y, x&&y, x||y, !(x));
//then, values of x & y are set to 1 & 0
x=1; y=0;
printf ("\n%d %d %d %d %d",x, y, x&&y, x||y, !(x));
//then, values of x & y are set to 1 & 1
x=1; y=1;
printf ("\n%d %d %d %d %d",x, y, x&&y, x||y, !(x));
}
