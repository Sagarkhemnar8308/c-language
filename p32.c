#include<stdio.h>
int main(){
      int a,b;

    printf("enter a ");
    scanf("%d",& a);

    printf("enter b ");
    scanf("%d",& b );

if(a>b){
    printf("%d",a,"is greater");
}else if(b>a){
    printf("%d",b,"is greater");
}else{
    printf("error");
}

    return 0;
}