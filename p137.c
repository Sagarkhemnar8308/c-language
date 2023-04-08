#include<stdio.h>
int main(){
    int num;
    printf("Enter the any number:");
    scanf("%d",&num);
    if(num>0){
        printf(" Number is Positive");
    }
    else if(num==0){
        printf("Number is zero(0)");
    }
    else{
        printf("number is negative");
    }
    return 0;
}