#include<stdio.h>

int main()
{
    int p, r, t;
    printf("Enter the principle amount\n");
    scanf("%d", &p);

    printf("Enter the rate of interest\n");
    scanf("%d",&r);

    printf("Enter the period\n");
    scanf("%d", &t);

    printf("The value of simple interest is %d", p * r * t /100);
    return 0;
}