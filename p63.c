#include<stdio.h>
int sum(int a,int b);
int main(){
    int a,b;

    printf("enter number");
    scanf("%d",&a);
      printf("enter number");
    scanf("%d",&b);

    int c=sum(a,b);

    printf("sum is :%d",c);

    return 0;
}

int sum(int a,int b){
    return a+b;
}