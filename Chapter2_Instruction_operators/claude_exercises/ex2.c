/*
Exercise 2:
Predict the output first, then verify with code:

int a = 5, b = 2;
int result = a++ + ++b * 2 - a-- ;
The answer of expression will be: 5
Steps:
=> a++ + ++b * 2 - a--
here a++ means increment after calculation same for a-- and ++b means increment +1 before calculation in actual variable so
first we will solve ++b * 2
a++ + 6 - a--, now the value of b variable becomes 3
solving a++ + 6
=> 11 - a--, now the value of a variable becomes 6
=> 5, now the value of a again becomes 5 
*/

#include <stdio.h>

int main() {
    int a = 5, b = 2;
    printf("The answer of expression a++ + ++b * 2 - a-- is: %d", a++ + ++b * 2 - a--);
    return 0;
}