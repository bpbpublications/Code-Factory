#include<stdio.h>
#include<math.h>
void main()
{
float x1,y1,x2,y2,man_dis, eucl_dis;
printf("Enter x1, y1, x2, y2");
scanf("%f%f%f%f", &x1, &y1, &x2, &y2); // read four float inputs from the user
//calculate  Manhattan distance
man_dis = abs(x1-x2) + abs (y1-y2);
//calculate  Euclidean distance
eucl_dis = sqrt((x1-x2)* (x1-x2) + (y1-y2)* (y1-y2));
// print the output on the screen
printf("Manhattan distance is %f",man_dis);
printf("\nEuclidean distance is %f",eucl_dis);
}

