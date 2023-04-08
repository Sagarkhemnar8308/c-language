#include<stdio.h>
int main(){
    int n,a,c,sum;

    printf("enter number");
    scanf("%d",&n);

    a=n;

    while(n>0){
           
           c=n%10;
           sum=sum+c*c*c;
          n = n/10;
           
    }
    if(a==sum){
        printf("is a armstrong number");
    }else{
        printf("is not a armstrong number");
    }
}