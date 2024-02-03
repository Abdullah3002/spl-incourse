#include<stdio.h>
int main()
{

int year;
printf("\n Please Enter any year you wish \n");
scanf("%d",&year);
if((year%400==0) || ((year%4==0) && (year%100!=0)))
printf("\n %d is a leap year. \n",year);
else
printf("\n%d is not the leap year.",year);
return 0;

}