#include<stdio.h>
void main()
{
char s1[20], s2[20], s3[20];
int i=0, j=0;
printf("Enter a string: ");
scanf("%s", s1);
printf("Enter a string: ");
scanf("%s", s2);
while(s1[i]!= '\0')
{
s3[i]=s1[i];
i=i+1;
}
while(s2[j]!= '\0')
{
s3[i]=s2[j];
i=i+1;
j=j+1;
}
printf("Concatenated string is %s", s3);
}
