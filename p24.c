#include<stdio.h>
int main(){
    int mark;

 printf("enter persentage");
    scanf("%d",& mark);

  switch(mark){
    case 90 ... 100:
    printf("%dtopper");
    break;
    case 75 ... 89:
    printf("%dvery good");
    break;
    case 55 ... 74:
    printf("accurany");
    break;
  }
    return 0;
}