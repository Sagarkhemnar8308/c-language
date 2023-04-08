#include<stdio.h>
int main(){
    int a;

    printf("enter number");
    scanf("%d",&a);

    if(a%5==0){
        printf("is divisible by 5");
    }else{
        printf("is not divisible by 5");
    }
}