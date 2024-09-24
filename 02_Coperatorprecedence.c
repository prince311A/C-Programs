#include <stdio.h>

int main()
{
    int a = 2;
    int b = 3;

    printf("The value of 3*a - 8*b is %d\n", 3 * a - 8 * b);
    printf("The value of 3*a - 8*b is %d\n", 3 * (a - 8 * b));
    // 1ST * / %
    // 2ND + -
    // 3RD =
    printf("The value of 8*b / 3*a is %d\n", 8 * b / 3 * a);
    // bodmas is not applied here
    // it assume () left to right in /*% cases so
    //(8*b) / 3*a, (8*b/3)*a, so its like 8*3/3 *2 =24/3 *2 = 16
    // this is called associativity operator
    return 0;
}