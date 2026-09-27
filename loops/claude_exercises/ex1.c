/*
Write a program that prints all even numbers from 1 to 20 (inclusive) using a for loop, one per line
*/

#include <stdio.h>

int main() {
    
    for (int i = 2; i <= 20; i+=2)
    {
        printf("%d\n", i);
    }
    
    return 0;
}