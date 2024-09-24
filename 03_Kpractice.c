#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter the four numbers you want to check\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b && a>c && a>d){
        printf("%d is the largest number",a);
    }
    else if(b>a && b>c && b>d){
        printf("%d is the largest number",b);
    }
    else if(c>a && c>b && c>d){
        printf("%d is the largest number",c);
    }
     else if(d>a && d>b && d>c){
        printf("%d is the largest number",d);
    }
    else{
        printf("BUM BHOLE");
    }
    

    return 0;
}