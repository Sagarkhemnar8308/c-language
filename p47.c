#include<stdio.h>
int main(){
int buyingPrise=14000;
int sellingPrise=15000;

int a=sellingPrise-buyingPrise;
if (sellingPrise>buyingPrise){
printf("farmer will get profit %d rs",a);
}else if(buyingPrise>sellingPrise){
printf("farmer will get loss %d rs",a);
}else{
   printf("error");
}
return 0;
}
