
#include<stdio.h>
void main()
{
int class_held, class_att;
float Percent_att;
printf("Enter total number of classes held ");
scanf("%d", &class_held);
printf("Enter total number of classes attended ");
scanf("%d", &class_att);

Percent_att = (class_att / (float)(class_held))  *100.0;
if(Percent_att>=80)
{ printf( "Not Debarred");  }
else
{ printf( "You are debarred. "); }

printf("Attendance is %f", Percent_att);
     }
