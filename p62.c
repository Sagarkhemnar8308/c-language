#include<stdio.h>
int table(int a);
int main(){
    int a;
    
    printf("enter number");
    scanf("%d",&a);

    table(a);
}

int table(int a){
    for(int b=1;b<=10;b++){
        printf(" %d * %d = %d\n",a,b,a*b);
    }
}