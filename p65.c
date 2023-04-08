#include<stdio.h>
int main(){
    char a;
   printf("enter country");
   scanf("%s",&a);

   if(a == 'i'){
    india();
   }else if(a == 'f'){
       french();
    }else{
        printf("error ");
    }
    return 0;
   }


int india(){
    printf("namaste");
}

int french(){
    printf("bonjour");
}