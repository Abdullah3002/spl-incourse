#include <stdio.h>

int main() {
    float n;
    int m;
    
    printf("Enter any floating point number: \n");
    scanf("%f", &n); // Corrected scanf format
    
    m = (int)n; // Casting n to int to extract the integer part
    printf("The integer part is = %d \n", m);
    printf("The floating point part is = %.2f\n", n - m);
    
    return 0;
}
