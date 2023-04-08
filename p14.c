#include<stdio.h>
int main(void){
    sum();
    sub();
    div();
    multi();
    return 0;
}

int sum(){
     int a=12;
     int b=13;
     int c=a+b;
     printf("add is = %d\n",c);
}
int sub(){
    int a=122;
    int b=111;
    int c=a-b;
    printf("subtract is =%d\n ",c);
}
int multi(){
    int a=12;
    int b=3;
    int c=a*b;
    printf("multiplication  is =%d\n ",c);
}
int div(){
    int a=66;
    int b=11;
    int c=a/b;
    printf("division is =%d\n ",c);
}