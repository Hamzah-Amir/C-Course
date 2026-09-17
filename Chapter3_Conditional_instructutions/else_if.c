#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18 && age <=69){
        printf("You can drive\n");
    }
    else if (age >= 70){
        printf("You should not drive it may be dangerous for you\n");
    }
    else {
        printf("You cannot drive\n");
    }
    return 0;
}