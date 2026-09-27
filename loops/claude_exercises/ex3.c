/*
Write a program that uses a do-while loop to repeatedly ask the user to enter a number, and stops as 
soon as they enter 0 (print each number entered before checking, except don't print anything 
for the final 0).
*/

#include <stdio.h>

int main() {
    int n;
    do
    {
        /* code */
        printf("Enter the number: ");
        scanf("%d", &n);
        if (n != 0) {
            printf("You entered %d\n", n);
        }
    } while (n != 0);
    
    return 0;
}