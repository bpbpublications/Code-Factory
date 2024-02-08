#include<stdio.h>
void  main()
{
int a,b,c,d,e;
float p;
printf("Enter marks in  5 subjects ");
scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
p=((a+b+c+d+e)/(float)500)*100;
if (p >=90)
printf("Grade is A");
else  if  (p >=80)
printf("Grade is B");
else if ( p >=60)
printf("Grade is C");
else if  (p >=40)
printf("Grade is D");
else
printf("Grade is F");
}
