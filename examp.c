#include<stdio.h>
void main(){
int a,b,c,d;
printf("enter the four no:\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b){
    if(a>c){
        if(a>d){
            printf("%d is the greatest number\n",a);
        }
        else{
            printf("%d is gretest number\n",d);
        }
    }
    else{
        if(c>d){
            printf("%d is the gretest number\n",c);
        }
        else{
            printf("%d is the greatest number\n",d);
        }
    }
}
else{
    if(b>c){
        if(b>d){
            printf("%d is the grestest number\n",b);
        }
        else{
            printf("%d is the gretest number\n",d);
        }
    }
    else{
        if(c>d){
            printf("%d is the gr number\n",c);
        }
        else{
            printf("%d is the gr number\n",d);
        }
    }
}
getch();
}
