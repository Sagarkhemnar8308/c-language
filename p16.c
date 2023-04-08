#include<stdio.h>
int main(){
    int username;
    int password;

    printf("enter username ");
    scanf("%d",& username);

    switch(username){
        case  1001:
        printf("enter password");
        break;
         case 1002:
        printf("enter password");
        break;
         case 1003:
        printf("enter   password");
        break;
         case 1004:
         printf("enter  password");
        break;
        default:
        printf("Invalid  username");
        break;
    
    }

    scanf("%d",& password);

    switch(password){
        case 131:
        printf("sagar khemnar");
        break;
        case 132:
        printf("sahil Mokal");
        break;
        case 133:
        printf("suraj bomble");
        break;
         case 134:
         printf("sahil sonawane");
         break;
         case 135:
         printf("sameer varpe");
         break;
    
        default:
        printf("wrong password");
    }

    return 0;
}