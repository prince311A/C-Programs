#include<stdio.h>

int main()
{
    //reversed n natural number by giving input
    int i,a;
    a = 1;
    printf("Enter the initial value\n");
    scanf("%d",&i);
    do{
        printf("The value of i is %d\n",i);
        --i;
    }
    while(i>=a);
    return 0;
}