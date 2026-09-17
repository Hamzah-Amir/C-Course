#include <stdio.h>

int main() {
    // Ternary expression is a short hand or one liner for if else
    // Syntax for ternary expression is as follows
    int a = 35;
    int b = 45;
    // Condition ? expression-if-true : expression-if-false
    a>b?printf("A is greater than B\n"):printf("B is greater than A\n");
    return 0;
}