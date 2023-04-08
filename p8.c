#include<stdio.h>
int main(){
int a[9]={};
a[0]=3;
a[1]=3;
a[2]=3;
a[3]=3;
a[4]=3;
a[5]=3;
a[6]=3;
a[7]=3;
a[8]=3;

for(int b=0;b<=8;b++){
    printf("%d\n",a[b]);
}

printf("%d\n",a[3]);
   
}