#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a");
    scanf("%d",&a);

    b=a*=3;
    printf("%d",b);

    return 0;
}