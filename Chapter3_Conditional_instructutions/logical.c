#include <stdio.h>

int main() {
    printf("There are three logical operators in C\n");
    printf("&&: Is true only when all conditions met\n");
    printf("||: Is true when either of the conditions met\n");
    printf("!: Is true when a condition is false like if 3!>5 here we said if 3 is not greater then 5 which is true\n");
    int a = 1;
    int b = 0;

    printf("\n--- C Logical Operators Demo ---\n\n");

    // 1. Logical AND (&&) - Returns 1 (True) only if BOTH conditions are true
    if (a && b) {
        printf("AND (a && b): Both are True\n");
    } else {
        printf("AND (a && b): One or both are False (Output: 0)\n");
    }

    // 2. Logical OR (||) - Returns 1 (True) if AT LEAST ONE condition is true
    if (a || b) {
        printf("OR  (a || b): At least one is True (Output: 1)\n");
    } else {
        printf("OR  (a || b): Both are False\n");
    }

    // 3. Logical NOT (!) - Reverses the state (True becomes False, and vice versa)
    printf("NOT (!a)    : Reversal of 'a' gives %d\n", !a);
    printf("NOT (!b)    : Reversal of 'b' gives %d\n", !b);
    return 0;
}