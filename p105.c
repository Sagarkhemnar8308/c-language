#include<stdio.h>
int main(){
  char gender;
  int age;
  char mu;
    printf("your are married or unmarried,gender,age");
     scanf("%c %c %d ",&mu,&gender,&age);

    
  
   if(mu == 'm'){
    printf("you are married");
  }
          else if(mu == 'u'){
                  if(gender == 'm'){
                    if(age>=21){
                      printf("you can married");
                    }else{
                        printf("you cant marrie");
                 }
     }else if(gender == 'f'){
    if(age>=18){
        printf("you can marry");
    }else{
        printf("you can't marry");
    };
    };
  }
 
  return 0;
}