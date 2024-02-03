#include<stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 0 && marks <= 100) {
        if (marks >= 90) {
            printf("Excellent! Keep up the good work!");
        } else if (marks >= 80) {
            printf("Very good! Well done!");
        } else if (marks >= 70) {
            printf("Good! You're doing fine!");
        } else if (marks >= 60) {
            printf("Not bad! Keep improving!");
        } else if (marks >= 50) {
            printf("Pass! You can do better!");
        } else {
            printf("Fail! Don't worry, try again!");
        }
    } else {
        printf("Invalid marks! Marks should be between 0 and 100.");
    }

    return 0;
}
