#include<stdio.h>
int main(){
    int a,b;

    printf("enter number");
    scanf("%d",&a);

    b=a-=2;

    printf("%d",b);

    return 0;
}