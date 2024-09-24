#include<stdio.h>

int main()
{
    //for print first n natural no. by++
    // int i,n;
    // printf("Enter the intial and final value\n");
    // scanf("%d%d",&i,&n);
    // do{
    //     printf("The value of i is %d\n",i);
    //     ++i;
    // }
    // while(i<=n);

    // last n natural no. by --
    int i,n;
    printf("Enter the intial and final value\n");
    scanf("%d%d",&i,&n);
    do{
        printf("The value of i is %d\n",i);
        --i;
    }
    while(i>=n);
    return 0;
}