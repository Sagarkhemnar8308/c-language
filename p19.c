#include<stdio.h>
int main(){
    int age;

    printf("enter age ");
    scanf("%d",& age);

    if(age<=5){
        printf("is baby");
    }else if(age>=13 && age <=17){
        printf("is teenager");
    }else if(age>18){
        printf("is adult");
    }else{
        printf("error");
    }
    return 0;
}