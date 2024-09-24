#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    if (num == 10)
    {
        printf("The value of number is 10\n");
    }
    else if (num == 20)
    {
        printf("The value of number is 20\n");
    }
    else if (num == 30)
    {
        printf("The value of nunber is 30\n");
    }
    else
    {
        printf("The value of number is none of these\n");
    }
    return 0;
}