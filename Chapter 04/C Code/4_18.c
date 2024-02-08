#include<stdio.h>
void main()
{
char s[30];
int l,i;
printf("Enter a String: ");
scanf("%s",s);
l=0;
for(i=0; s[i]!= '\0'; i++)
l=l+1;
for( i=0;i<l;i++)
{
if (s[i] !=s[l-i-1])
{
printf("The string is not palindrome");
break;
}
}
if (i==l)
printf("The string is a palindrome");
}
