#include<stdio.h>
void main()
{
int x,y;
char op;
printf("Enter two numbers: ");
scanf("%d%d",&x, &y);
fflush(stdin);
printf("Enter operator: a for addition, s for subtraction, m for multiplication and d for division: ");
scanf("%c", &op);
if (op== 'a')
printf("%d",x+y);
else if (op== 's')
printf("%d", x-y);
else if (op== 'm')
printf("%d", x*y);
else if (op== 'd')
printf("%f", x/(float)y);
else
printf( "Entered invalid operator");
}
