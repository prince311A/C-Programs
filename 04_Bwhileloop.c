#include<stdio.h>

int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    while (a<10){
        // (a>10) number is 11 then its tends to infinity
        printf("%d\n",a);
        ++a;
    }
    return 0;
}