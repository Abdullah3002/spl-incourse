#include<stdio.h>

int main() {
    int index;
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    index = marks / 10;
    switch (index) {
        case 10:
        case 9:
        case 8:
            printf("Excellent");
            break;
        case 7:
        case 6:
            printf("Very good");
            break;
        case 5:
        case 4:
            printf("Good");
            break;
        default:
            printf("Bad");
            break;
    }
    return 0;
}
