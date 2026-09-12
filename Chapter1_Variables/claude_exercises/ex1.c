/*
Exercise 1:
Write a C program that declares an int for age, a float for height (in meters), and a char for a grade letter. Take all three as input from the user using scanf, then print them back in a single sentence using printf.

eg: You are 20 years old, 1.75m tall, and got grade A
*/

#include <stdio.h>

int main() {
    int age;
    float height;
    char grade;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    printf("You are %d years old, %.2f tall, and got grade %c\n", age, height, grade);
    return 0;
}