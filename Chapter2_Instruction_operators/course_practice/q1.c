/*
Check if a value is divisible by 97 or not
*/

#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The remainder number %d divisible by 97 is: %d", a, a%97);
    return 0;
}