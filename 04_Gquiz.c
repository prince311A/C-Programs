#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value to print first n natural no.\n");
    scanf("%d",&n);
    for(int a=1;a<=n;a++){
        printf("The value of a is %d\n",a);
    }
    return 0;
}