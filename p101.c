#include<stdio.h>
int main(){
    int a;

    printf("enter number");
    scanf("%d",&a);

    if(a%7==0){
        printf("is divisible by 7");
    }else{
        printf("is not divisible by 7");
    }
}