/*
Without running it, predict the output of this expression, then write a program to verify it:

int result = 10 + 20 * 3 % 7 - 4 / 2;
Answer of this expression will be: 12
Reason/logic of the answer
10 + 20 * 3 % 7 - 4 / 2
Due to precedence first we will evaluate * operator
=> 10 + 60 % 7 - 4 / 2
Now / operator
=> 10 + 60 % 7 - 2
Then % operator
10 + 4 - 2
Then + 
14 -2 
Then - 
12 
*/

// Verifying it via program.
#include <stdio.h>

int main() {
    printf("The answer of expression 10 + 20 * 3 % 7 - 4 / 2 is %d", 10 + 20 * 3 % 7 - 4 / 2);
    return 0;
}