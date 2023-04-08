#include<stdio.h>
int main(){
int a;

printf("enter number");
scanf("%d",& a);

 switch(a%2){
    case 0:
    printf("%d is even number ",a);
    break;
    case 1:
    printf("%d is odd number ",a);
    break;

 }  
  return 0;
}