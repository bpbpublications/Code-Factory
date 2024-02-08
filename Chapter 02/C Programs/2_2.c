#include<stdio.h>
void main()
{
char n[100];
int a;
printf("Enter your name: ");
gets(n);
fflush(stdin);
printf("Enter your age: ");
scanf("%d", &a);
if (a>=18)
printf("%s  is an adult", n);
}
