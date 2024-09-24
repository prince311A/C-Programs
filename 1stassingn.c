#include <stdio.h>
#include <conio.h>
void main()
{
    //(1,2)RECTANGLE
    int length, breadth, area, parameter;
    printf("Enter length and breadth of rectangle\n");
    scanf("%d%d", &length, &breadth);
    area = length * breadth;
    printf("The area of rectangle is %d\n", area);
    parameter = 2 * (length + breadth);
    printf("Parameter of rectanglis %d\n", parameter);

    //(3,4)CIRCLE
    int radius;
    float area1, circum;
    printf("Enter the radius of cirle\n");
    scanf("%d", &radius);
    area1 = 2 * 3.14 * radius * radius;
    printf("The area of cirle is %f\n", area1);
    circum = 2 * 3.14 * radius;
    printf("The circum of circle is %f\n", circum);

    //(5,6)CYLINDER
    int  radii,height;
    float vol,surfarea;
    printf("Enter the radii and height of cylinder\n");
    scanf("%d%d", &radii,&height);
    vol = 3.14 * radii * radii * height;
    printf("The volume of cylinder is %f\n", vol);
    surfarea = 2 * 3.14 * radii * radii +  2 * 3.14 * radii * height;
    printf("The surface area of clylinder is %f\n", surfarea);

    //(7)SIMPLE INTEREST
    int p,r,t;
    printf("Enter principal,rate and period\n");
    scanf("%d%d%d", &p,&r,&t);
    printf("The value of simple interest is %d\n", p * r * t /100);

    //(8,9)TEMPERATURE CONVERSION
    float celsius,fahrenheit,formula,far;
    printf("Enter celsius temperature\n");
    scanf("%f", &celsius);
    formula = (celsius * 9/5) + 32;
    printf("The  value of this celsius temperature in fahrenheit is %f\n", formula);
    printf("Enter fahrenheit temperature\n");
    scanf("%f", &fahrenheit);
    far = (fahrenheit - 32) * 5/9;
    printf("The  value of this fehrenheit temperature in celsius is %f\n", far);

    //(10)TRIANGLE
    int heightt, base;
    float area2;
    printf("Enter the heightt and base of triangle\n");
    scanf("%d%d", &heightt, &base);
    area2 = 0.5 * heightt * base;
    printf("The area of triangle is %f\n", area2);

    getch();
}