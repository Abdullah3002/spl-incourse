#include<stdio.h>

int i=4; //  global definition
int main()
{

int a=10;
i=i+1; // local variable
printf("%d is a local variable %d is global variable",a,i);
return 0;

}