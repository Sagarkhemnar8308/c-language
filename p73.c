#include<stdio.h>
int main(){
    int a,c;

    printf("enter a :-");
    scanf("%d",&a);
    
    c=a+=3;

    printf("%d   %d",a,c);
    return 0;
}