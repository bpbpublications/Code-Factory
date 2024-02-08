/*
Take features such as shape and color as input and identify the object based upon its shape and color as given below:
	Sphere & red	 Tomato
	Sphere & orange	Orange
	Cuboid and red	 Brick
	Cuboid and orange	 Dustbin
*/

#include<stdio.h>

int main()
{
char s, co;

fflush(stdin);
printf("Enter the shape of the object (s/ c): ");
scanf("%c", &s);

fflush(stdin);
printf("Enter the color of the object (r /o): ");
scanf("%c", &co);

if(s== 's')
{
    if(co == 'r')
        printf("Object is Tomato");
    else if(co == 'o')
        printf("Object is Orange");
    else
        printf("Wrong input");
}
else if(s == 'c')
 {
    if(co == 'r')
        printf("Object is Brick");
    else if(co == 'o')
        printf("Object is Dustbin");
    else
        printf("Wrong input");
}
else
    printf("Wrong input");

}
