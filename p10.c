#include<stdio.h>
int main(){
    int a;

printf("enter age");
scanf("%d",& a);

switch(a>18){
    case 0:
    printf("is not  eligible for vote");
    break;
    case 1:
    printf("is eligible for vote");
    break;
    default:
    printf("error");

}
return 0;
}