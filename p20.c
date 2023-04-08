#include<stdio.h>
int main(){
    int a;

    printf("enter age");
    scanf("%d",& a);

    if(a>=18){
 printf("adult\n");
  printf("they can be vote \n");
  printf("they can be drive\n");
    }
else{
    printf("is can not adult");
}
    return 0;
}