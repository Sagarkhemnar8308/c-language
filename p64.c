#include<stdio.h>
int main(){
    int a;
    printf("enter a ");
    scanf("%d",&a);

    if(a == +91){
        printf("%d country code = india ",a);
    }else if(a == +92){
        printf("%d country code = pakistan",a);
    }else if(a == +93){
        printf("%d country code = afganistan",a);
    }else{
        printf("error");
    }
    return 0;
}