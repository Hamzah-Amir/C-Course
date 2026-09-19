/*
Write a program that reads a person's age (int) and whether they have a valid ID (int hasID, 1 or 0) as input
Using a logical operator (&&), print "Entry allowed" only if age is 18 or older AND they have a valid ID, 
otherwise print "Entry denied"
*/

#include <stdio.h>

int main() {
    int age, ID;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your ID: ");
    scanf("%d", &ID);
    if (age >= 18 && ID == 1) {
        printf("Entry Allowed\n");
    } else {
        printf("Entry Denied\n");
    }
    return 0;
}