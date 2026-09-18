/*
Write a program to deterine whether a character is lowercase or not
*/

#include <stdio.h>

int main() {
    char character;
    printf("Enter the character: ");
    scanf("%c", &character);
    if (character >= 'a' && character <= 'z') {
        printf("Entered character is lower case\n");
    } else {
        printf("Entered character is not lowercase");
    }
    return 0;
}