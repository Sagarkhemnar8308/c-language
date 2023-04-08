#include<stdio.h>
int main(){
    int n,rem;
   
   printf("enter number");
   scanf("%d",&n);

   while(n>0){

   rem=n%10;
   printf("%d",rem);
   n=n/10;
   }

}