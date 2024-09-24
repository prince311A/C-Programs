#include <stdio.h>

int main()
{
    int radius = 3;
    float pi = 3.14;
    int hieght = 5;

    printf("The area of a circle is %f\n", pi * radius * radius);

    printf("The volume of a cylinder is %f", pi * radius * radius * hieght);
    return 0;
}