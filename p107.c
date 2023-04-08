#include<stdio.h>
int main(){

    int num,a;

    printf("enter number");
    scanf("%d",&num);
   
   a=num;
   do{
    printf("%d\n",a);
    a--;
   }
   while(a>=1);
return 0;
}