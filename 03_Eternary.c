#include <stdio.h>

int main()
{
    int a;
    printf("Enter a\n");
    scanf("%d", &a);
    // one liner
    (a < 5) ? printf("The value is lessthan 5") : printf("The value is notlessthan 5");
    return 0;
}