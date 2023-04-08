#include<stdio.h>
int main(){
  int a;

  printf("enter 1-add 2-sub 3-multi 4-divide");
  scanf("%d",&a);

    switch(a){
        case 1:
         sum();
        break;
        case 2:
        sub();
        break;
        case 3:
        multi();
        break;
        case 4:
        divide();
        break;
    }
    return 0;
}


int sum(){
     int a,b,c;

    printf("enter number1st");
    scanf("%d",&a);

    printf("enter number2nd");
    scanf("%d",&b);
c=a+b;
    printf("add is %d ",c);
}

int sub(){
     int a,b,c;

    printf("enter number1st");
    scanf("%d",&a);

    printf("enter number2nd");
    scanf("%d",&b);
c=a-b;
    printf("sub is %d ",c);
}

int multi(){
     int a,b,c;

    printf("enter number1st");
    scanf("%d",&a);

    printf("enter number2nd");
    scanf("%d",&b);
c=a*b;
    printf("multiply is %d ",c);
}

int divide(){
     int a,b,c;

    printf("enter number1st");
    scanf("%d",&a);

    printf("enter number2nd");
    scanf("%d",&b);
c=a/b;
    printf("divide is %d ",c);
}