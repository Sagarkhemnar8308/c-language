#include<stdio.h>
int main(){
    int a,b;

    printf("enter number a");
    scanf("%d",&a);
    printf("enter number b");
    scanf("%d",&b);
    if(a>b){
        printf("large is %d",a);
    }else{
        printf("large is %d",b);
    }
    return 0;
}