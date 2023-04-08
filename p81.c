//greater than equal to
#include<stdio.h>
int main(){
    int a;

    printf("enter age");
    scanf("%d",&a);

    if(a>=18){
        printf("%d can be vote",a);
    }else if(a<=17){
        printf("%d not able to vote",a);
    }
return 0;
}