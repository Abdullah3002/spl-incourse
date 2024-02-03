#include<stdio.h>
int main()
{

int p,q,x,y;
printf("Enter the value of x and y \n ");
scanf("%d %d",&x,&y);
printf("x=%d\t y=%d\n",x,y);
p=x++;
q=y++;
printf("x=%d\t y=%d\n",x,y);
printf("p=%d\t y=%d\n",p,q);
p=--x;
q=--y;

printf("x=%d\t y=%d\n",x,y);
printf("p=%d\t y=%d\n",p,q);
return 0;

}