#include<stdio.h>
int main(){
    int a;
    printf("enter number");
    scanf("%d",&a);

    for(int b=1;b<=a;b++){
        if(b%2==0){
            printf("%d\n",b);
        }
    }
}