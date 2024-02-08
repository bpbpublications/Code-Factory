#include<stdio.h>
void main()
{
int i, v=0;
char s[30];
printf("Enter a string: ");
gets(s);
i=0;
while(s[i] != '\0'){
if ((((int)(s[i]) >=65) && ((int)(s[i]) <=90)) || (((int)(s[i]) >=97) && ((int)(s[i]) <=122)))
{

if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
    {v=v+1;}
i=i+1;
}
else{
    printf("Special character encountered.\n");
    break;
}
}
printf("There are %d consonants in the string.", v);
}
