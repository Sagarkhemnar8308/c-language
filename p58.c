#include<stdio.h>
int main(){
  int a;
  printf("enter number");
  scanf("%d",&a);
  int c=1;
  for(int b=1;b<=a;b++){
  c=c*b;
}
printf(" %d",c);
return 0;
}