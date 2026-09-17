#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age > 18){
        printf("Congratulations you can drive");
    } else {
        printf("You are underage and you cannot drive!");
    }
    return 0;
}
