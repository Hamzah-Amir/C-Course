/*
Write a program to determine whether a student has passed or failed. To pass, a student requires a total
40% and atleast 33% in each subject. Assume there are three subjects and take the marks as input 
from the user.
*/

#include <stdio.h>

int main() {
    int math, computer, physics; 
    float total_marks = 300.0;
    printf("Enter maths marks: ");
    scanf("%d", &math);
    printf("Enter computer marks: ");
    scanf("%d", &computer);
    printf("Enter physics marks: ");
    scanf("%d", &physics);
    int marks_obtained = math + computer + physics;
    float percentage = ((float) marks_obtained/total_marks) *100;
    if (percentage >= 40 && math >=33 && physics >= 33 && computer >= 33)
    {
        printf("You have passed the exam\n");
        printf("You gained %.2f percentage\n", percentage);
    }
    else {
        printf("You have failed the exam\n");
        printf("You gained %.2f percentage\n", percentage);
    }
    
    return 0;
}