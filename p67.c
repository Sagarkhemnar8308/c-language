#include<stdio.h>
int main(){

pog();

return 0;

}

void pog(){
    char c;

    printf("enter country code");
    scanf("%d",&c);

    if(c == '+91'){
        printf("india ");
    }else if(c=='+92'){
        printf("pakistan");
    }else{
        printf("error");
    }

}