#include<stdio.h>
int main(){
    int a;

    printf("enter number");
    scanf("%d",&a);

    if(a>0 && a<18){
        printf("teenager");
    }else if(a>=18 && a<30){
        printf("they are strongest person");
    }else if(a>=30 && a<50){
        printf("they are passed age 30");
    }else{
        printf("error");
    }
    return 0;
}