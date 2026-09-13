/*
    Operators Priority: As C does not follow BODMAS rule so there is a builtin operators priority system
    in C language which is as follows
    1st Priority = *, /, %
    2nd priority = +, -
    3rd priority = "=" 
    Operators associativity: when operator of same priority are present in expression the tie is taken 
    care by assoiativity
    x*y/z becomes (x*y)/z
    x/y*z becomes (x/y)*z
    Tip: We should always use parenthesis for calculations
*/
#include <stdio.h>

int main() {
    int a = 3, b = 6, c = 9;
    printf("The value is %d\n", a*b/c);
    printf("The value is %d\n", a*b/c + 7);
    printf("The value is %d\n", 3*a/5*c + 6 * b);
    /*
    The third expression will be solved like this
    3*a/5*c+ 6*b
    3*a/5*c + 36
    9/5*c + 36
    1 * c + 36
    9 + 36
    45
    */
    return 0;
}