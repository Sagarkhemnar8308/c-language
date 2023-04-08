#include<stdio.h>
int main(){
    int a,i=1,odd=1;

    printf("enter number");
    scanf("%d",&a);

    while(i<=a){
        printf("%d\n",odd);
        odd=odd+2;
        i++;
    }
}