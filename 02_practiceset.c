#include<stdio.h>

int main()
{
    //printf("%f\n", 3.0/8-2);
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    printf("Divisibility test returns: %d", num%4);
    return 0;
}