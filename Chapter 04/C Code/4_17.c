
#include<stdio.h>
void main()
{
char  s[30];
int l,i;
printf("Enter a String: ");
scanf("%s",s);
l=0;
for (i=0; s[i]!='\0'; i++)
l=l+1;
printf("The length of the string is  %d", l);
}
