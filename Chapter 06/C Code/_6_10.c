/*
Validate and encrypt the password as per the following conditions:
1.	Length of the password should be between 8-12 characters.
        It should contain atleast one uppercase alphabet, lowercase aphabet,
        digits and special characters.
2.	For encryption, replace alphabets with 6-bit binary number
        such that first bit represents lower case (by 0) or
        upper case (by 1) and remaining 5 bit are the binary encoding.
        For example: a 000001, B 100010 and so.
3.	Replace digits as 0-A, 1-B, 2-C, 3-D, 4-E, 5-F, 6-G,7-H, 8-I, 9-J
4.	Keep the special characters as it is
For example:
Password: @Ab_%%82
Encrypted Password: @100001000010_%%IC

*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int ord(char s)
{
    return((int)s);
}



void bin (int nn, int ss[]) {
  // variable to store the result
  long bina = 0;
  int re, i = 1;
  int j=0;
 // loop to convert to binary
  while (nn != 0) {
        // get remainder of n divided by 2
    re = nn % 2;
        // divide n by 2
    nn /= 2;
        // multiply remainder by i
    // add the product to bin
    bina += re * i;
        // multiply i by 10
    i *= 10;
    ss[j]=re;
    j=j+1;
      //printf("in func=%c\n", ss[j-1]);
  }
  while(j<6)
  {
      ss[j]=0;
      j=j+1;
  }
  //ss[j]='\0';
  //printf("in func=%d\n", strlen(ss));

//return bina;
}

int main()
{
char encry_ps[100]="";
char p_s[13];
int Ac=0;
int ac=0;
int nc=0;
int sc=0;
int ii, h;
//char x[6]="";
//char x2[6]="";

fflush(stdin);
printf("Enter your password: ");
scanf("%s", p_s);

if(strlen(p_s) < 8 || strlen(p_s) > 12)
    {
        printf("Length of the password should be between 8-12 characters." );
        getch();
        exit(0);
    }
for(ii=0; ii< strlen(p_s); ii++)
{
    if (ord(p_s[ii]) >=65 && ord(p_s[ii]) <=90)
        Ac=1;
    else if (ord(p_s[ii]) >=97 && ord(p_s[ii]) <=122)
        ac=1;
    else if (ord(p_s[ii]) >=48 && ord(p_s[ii]) <=57)
        nc=1;
    else if (ord(p_s[ii]) >=33 && ord(p_s[ii]) <=126)
        sc=1;
}
if (!(Ac==1 && ac==1 && nc==1 && sc==1))
    {
    printf("Password must contain atleast one uppercase alphabet, lowercase aphabet, digits and special characters.");
    getch();
    exit(0);
    }

//printf("Encryption Started: \n");
for(ii=0; ii< strlen(p_s); ii++)
{
     if (ord(p_s[ii]) >=48 && ord(p_s[ii]) <=57)
        {
        encry_ps[strlen(encry_ps)]=p_s[ii]+16;
        }
    else if (ord(p_s[ii]) >=65 && ord(p_s[ii]) <=90)
       { char xx[7]="";
        int xx2[6];
        long xx2_int;
        bin(ord(p_s[ii])-65+1, xx2);
        xx2[5]=1;
        int h1;
        for(h1=0; h1<=5; h1++)
            xx[h1]=xx2[h1]+48;
        xx[h1]='\0';
        strrev(xx);
        strcat(encry_ps,xx);
       }
    else if (ord(p_s[ii]) >=97 && ord(p_s[ii]) <=122)
       { char xa[7]="";
        int xa2[6];
        bin(ord(p_s[ii])-97+1, xa2);
        xa2[5]=0;
        for(h=0; h<=5; h++)
            xa[h]=xa2[h]+'0';
        xa[h]='\0';
        strrev(xa);
        strcat(encry_ps,xa);
       }
    else
        {
        encry_ps[strlen(encry_ps)]=p_s[ii];
        }
}
printf("The encrypted password is %s", encry_ps);

return(0);
}
