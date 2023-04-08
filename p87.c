#include<stdio.h>
int main(){
    int a;
    printf("enter num");
    scanf("%d",&a);

int c=1;
    for(int b=1;b<=a;b++){
        c=c*b;
    }
    printf("factorial of %d is %d",a,c);
    return 0;
}