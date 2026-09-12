/*
Exercise 2:
Write a program that reads three int scores (out of 100) on one line, space-separated, using a single scanf call. Compute their average as a float (careful with integer division), then print:
*/

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three scores (0-100) seperated by spaces: ");
    scanf("%d %d %d", &a, &b, &c);
    float avg = ((a + b + c )/(float)3); // to type cast we converted 3 to float
    printf("The average of %d, %d and %d is: %.2f", a, b, c, avg);
    return 0;
}