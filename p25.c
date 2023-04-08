#include<stdio.h>
int main(){
    int a,b;

     printf("enter num1");
    scanf("%d",& a);

   printf("enter num2");
    scanf("%d",& b);

     if(a<b){
        printf("is smallest num  :- %d",a);
    }else if(b<a){
        printf("is smallest num :- %d  ",b);
    }else{
        printf("is same");
    }
    return 0;
}