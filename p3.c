#include<stdio.h>
int main(){
    int number;

    char days[8][15]={"mon","tue","wed","thu","fri","sat"};

    printf("enter number");
    scanf("%d",&number);

    printf("%s",days[number-1]);

    return 0;

}