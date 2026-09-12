/*
Write a program to convert Celcius into fahrenhiet
*/

#include <stdio.h>

int main() {
    float celcius;
    printf("Enter temperature in Celcius: ");
    scanf("%f", &celcius);
    printf("%.2f degree celcius is equal to %.2f degree in fahrenheit.", celcius, (celcius*9/5)+32);
    return 0;
}