#include<stdio.h>
int main(){
    int n;

    printf("enter number");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("1\n");
    }
}