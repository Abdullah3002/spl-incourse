// A c program to find the area and circumference of a circle (Use pi as symbolic contstant)

#include<stdio.h>
#define pi 3.1416
int main()
{
float area,r,cir;
printf("Enter the radius \n")

scanf("%f",&r);
area=pi*r*r;
cir=2*pi*r;
printf("The area = %f\n",area);
printf("The circumference is = %f\n",cir);
return 0;

}