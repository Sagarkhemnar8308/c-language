#include<stdio.h>
int main(){
    int a,b,c;

    printf("enter num");
    scanf("%d",& a);
     printf("enter num");
    scanf("%d",& b);

    c=a==b;

    //printf("%d",c);
    if(c==1){
        printf("true");
    }else{
        printf("false");
    }
return 0;
}