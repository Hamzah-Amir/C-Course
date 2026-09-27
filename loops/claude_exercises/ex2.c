/*
Write a program that reads a positive integer n, then uses a while loop to compute and print the sum of all integers from 1 to n
*/

#include <stdio.h>

int main() {
    int n, sum = 0;
    int i = 1;
    printf("Enter positive integer: ");
    scanf("%d", &n);
    while (i <=n )
    {
        sum += i;
        i++;
    }
    printf("The sum of integer %d from 1 is %d \n", n, sum);
    return 0;
}