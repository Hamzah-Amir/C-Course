/*
Calculate income tax paid by an employee to government as per slabs mention below:
2.5 - 5.0L => Tax 5%
5.0 - 10.0L => Tax 20%
Above 10L => Tax 30%
Note: There is no income tax below 2.5L, take income value as an input from user
*/

#include <stdio.h>

int main() {
    int income;
    float tax;
    printf("Enter your income\n");
    scanf("%d", &income);
    if (income > 250000 && income <= 500000) {
        tax = ((float)income/100) * 5;
        printf("Your income tax is %.2f in total\n", tax);
    } else if (income > 500000 && income <= 1000000) {
        tax = ((float)income/100) * 20;
        printf("Your income tax is %.2f in total\n", tax);
    } else if (income > 1000000) {
        tax = ((float)income/100.0) * 30;
        printf("Your income tax is %.2f in total\n", tax);
    } else {
        printf("You don't have to pay tax\n");
    }
        
    return 0;
}