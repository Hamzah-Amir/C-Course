/* 
Calculate area of rectangle using:
a) hard coded values
b) input by user
*/

#include <stdio.h>

int main() {

    // Solution A:
    int area_a, length_a, width_a;
    length_a = 12;
    width_a = 4;
    area_a = length_a * width_a;
    printf("The area of rectangle by hard-coded values is is: %d", area_a);

    // Solution b
    int area_b, length_b, width_b;
    printf("\nEnter Length: ");
    scanf("%d", &length_b);
    printf("Enter Width: ");
    scanf("%d", &width_b);
    area_b = length_b * width_b;
    printf("Area of rectangle by input values is: %d", area_b);
}