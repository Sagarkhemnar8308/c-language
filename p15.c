#include<stdio.h>
int main(){
    int id;

    printf("enter id");
    scanf("%d",& id);
    switch(id){
        case 1:
        printf("founder");
        break;
        case 2:
        printf("vice-president");
        break;
        case 3:
        printf("employee");
        break;
        case 4:
        printf("sinor");
        break;
        default:
        printf("Not Valid");
break;
            }
            return 0;
}