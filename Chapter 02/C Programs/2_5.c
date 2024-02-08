#include<stdio.h>
#include<math.h>
void main()
{
int x1, x2, x3;
printf("Enter the three sides of a triangle: ");
scanf("%d%d%d", &x1,&x2,&x3);
if((x1+x2) > x3  && (x1+x3) > x2  && (x2+x3) > x1)
	printf("It is a valid triangle");
else
    printf("It is not a valid triangle");
}




