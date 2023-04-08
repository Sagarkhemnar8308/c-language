#include<stdio.h>
int main(){
    int a;

    printf("enter num ");
    scanf("%d",& a);

    if(a%2==0){
        printf(" even  %d",a);
    }else{
        printf(" odd %d",a);
    }
return 0;
}