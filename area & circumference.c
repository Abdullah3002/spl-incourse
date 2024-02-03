// A c program to find the area and circumference of a circle (Use pi as symbolic contstant)

#include<stdio.h> // preprocessor directive include
#define pi 3.1416 // preprocessor directive define
int main() //main() function section
{
float area,r,cir; // declaration section
printf("Enter the radius: \n");

scanf("%f",&r);
area=pi*r*r;
cir=2*pi*r;
printf("The area = %f\n",area);
printf("The circumference is = %f\n",cir);
return 0; //the function doesn't return any value

} 