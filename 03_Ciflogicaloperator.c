#include<stdio.h>

int main()
{
    int age;
    printf("Enter the age\n");
    scanf("%d", &age);

    if (age <= 70 && age >= 18)
    {
        printf("Person is eligible to drive");
    }
    else
    {
        printf("Person is below the age so not eligible to drive");
    }
    return 0;
}