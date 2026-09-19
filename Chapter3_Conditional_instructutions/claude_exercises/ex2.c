/*
Write a program that reads an integer test score (0–100) and prints a letter grade using an if-else ladder
90–100 → A
75–89 → B
60–74 → C
Below 60 → F
*/

#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100) {
        printf("You got A grade\n");
    } else if (marks >= 75 && marks <=89) {
        printf("You got B grade\n");    
    } else if (marks >= 60 && marks <= 74) {
        printf("You got C grade\n");
    } else {
        printf("You got F grade\n");
    }
    return 0;
}