#include<stdio.h>
int main(){
    int mark;
    
    printf("enter mark :- ");
    scanf("%d",&mark);

    switch(mark){
        case 0 ... 34:
        printf(" fail");
        break;
        case 35 ... 100:
        printf("pass");
        break;
    }
    return 0;
}