#include<stdio.h>
int main(){
    float base,height;

    printf("enter  base");
    scanf("%f",&base);
    printf("enter  height");
    scanf("%f",&height);

    float formula=0.5*base*height;

    printf("base is %f height is %f area of traingle is = %f",base,height,formula);

return 0;
}