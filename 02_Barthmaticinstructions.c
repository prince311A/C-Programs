#include<stdio.h>
#include<math.h>

int main()
{
    int a = 4;
    int b = 5;
    int z;
    z = b * a;
    // b * a = z is illegal
    printf("the value of z is %d\n", z);

    printf("5 when divided by 2 gives remainder %d\n", 5 % 2);
    printf("-5 when divided by 2 gives remainder %d\n", -5 % 2);
    
    printf("The value of 4 ^ 5 is %d\n", 4^5); 
    //This will not produce 4 to the power 5

    printf("The value of 6 + 5 is %d\n", 6 + 5);
    printf("The value of 6 + 5.6 is %f\n", 6 + 5.6);
    printf("The value of 6.1 + 5.6 is %f\n", 6.1 + 5.6);

    printf("The value of 5/2 is %d\n", 5/2);
    printf("The value of 5.0/2 is %f\n", 5.0/2);
    printf("The value of 3.0/9 is %f\n", 3.0/9);
    
    return 0;
}