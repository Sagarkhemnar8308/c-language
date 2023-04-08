#include<stdio.h>
int main(){
    int math,sci,eng;

    printf("enter marks of math sci eng");
    scanf("%d %d %d",&math,&sci,&eng);

    float avg=(math+sci+eng)/3;

    printf("math = %d sci = %d eng = %d average is = %f",math,sci,eng,avg);

    return 0;
}