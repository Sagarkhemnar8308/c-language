#include<stdio.h>
int main(){
    int a;

    printf("enter num");
    scanf("%d",&a);

    for(int b=1;b<=10;b++){
        printf("%d * %d = %d\n",a,b,a*b);
    }
}