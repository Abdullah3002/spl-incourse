#include<stdio.h>
int main()
{
    
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0)
    n=-n;
    printf("The absolute value is %d\n",n);
    return 0;
    
    
    
}