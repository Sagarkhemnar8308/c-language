#include<stdio.h>
int main(){
    int n,a,sum=0;


    printf("enter number");
    scanf("%d",&n);

    printf("entered number ......");
    for(int i=1;i<=n;i++){
        scanf("%d",&a);

       sum=sum+a;

    }
    printf("%d",sum);
}