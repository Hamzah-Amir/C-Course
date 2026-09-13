/*
int a = 5, b = 10, c = 0;
int result = (a < b) && (c || b > a) + 2;
Predict result, walk through precedence (relational vs logical vs +), then verify with code.
The answer of expression will be: 1
(a < b) is 1 because it is true so,
1 && (c || b > a) + 2, evaluating right side of &&
1 && 1 + 2, because c or b is greater than a
1 && 3, as both values are non zero it means it is true and in bool the number for true is 1
*/

#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 0;
    int result = (a < b) && (c || b > a) + 2;
    printf("Result of expression is %d", result);
    return 0;
}