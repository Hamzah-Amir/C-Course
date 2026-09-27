/*
Write a program to find factorial of a given number
*/

#include <stdio.h>

int main() {
    int n;
    int factorial = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("Factorial is %d \n", factorial);
    
    return 0;
}