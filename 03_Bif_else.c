#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age\n");
    scanf("%d", &age);

    if (age > 18)
    {
        printf("Person is eligible to drive");
    }
    else
    {
        printf("Person is below the age so not eligible to drive");
    }
    // if(age==50)
    // {
    // printf("Yahoo| Half Century");
    // } 
    //= used for assignment,==used for equality check
    return 0;
}