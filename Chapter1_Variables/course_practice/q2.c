/*
Calculate area of circle then modify same program to calculate volume of cylinder using given radius and height
*/

#include <stdio.h>

int main() {
    
    int radius = 7;
    printf("The area of circle with radius %d is %f\n", radius, 3.14*radius*radius);
    
    int height = 13;
    printf("The volume of cylinder with radius %d and height %d is: %f", radius, height, 3.14*radius*radius*height);
    return 0;
}