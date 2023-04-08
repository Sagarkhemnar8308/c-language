#include<stdio.h>
int main(){
    int a; 
    printf("enter number");
    scanf("%d",&a);

    if(a<0){
        printf("is a negative");
    }else if(a>0){
        printf("is a positive");
    }else if(a==0){
        printf("is a zero");
    }
}