#include<stdio.h>
int main(){
    int c;

    printf("enter Operation ");
    scanf("%d",& c);
     
switch(c){
  case 1:
  sum(1);
  break;

  case 2:
  sub(2);
  break;

  case 3:
  multi(3);
  break;

   case 4:
  division(4);
  break;
 
 default:
 printf("error");

}
}

int sum(){
     int a,b;
 printf("enter a");
 scanf("%d",& a);
 printf("enter b");
 scanf("%d",& b);
     int c=a+b;
     printf("add is %d\n",c);
}

int sub(){
    int a,b,c;

    printf("enter 1st num");
    scanf("%d",& a);

    printf("enter 2nd num");
    scanf("%d",& b);
       
       c=a-b;
printf("sub is %d\n",c);
    
}

int multi(){
    int a,b,c;
    printf("enter a");
    scanf("%d",& a);

    printf("enter b");
    scanf("%d",& b);

    c=a*b;

    printf("multiply is %d\n",c);
}

int division(){
    int a,b,c;
    printf("enter a");
    scanf("%d",& a);

    printf("enter b");
    scanf("%d",& b);

    c=a/b;

    printf("Division is %d\n",c);
}