#include<stdio.h>
int main(){
    int a=3;
    char b='a';
    float c=3.14;
    double d=20.455;
 
    printf("integer size is %d\n",sizeof(int));
    printf("char size is %d\n",sizeof(char));
    printf("float size is %d\n",sizeof(float));
    printf("double size is %d\n",sizeof(double));
    return 0;
}