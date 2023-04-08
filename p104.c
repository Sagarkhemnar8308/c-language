#include<stdio.h>
int main(){
    int math,sci,eng;

    printf("sci mark");
    scanf("%d",&sci);

    printf("math marks");
    scanf("%d",&math);

    printf("eng marks");
    scanf("%d",&eng);



    float avg=(math+sci+eng)/3;

    printf("math = %d sci = %d eng = %d\n average is = %f\n",math,sci,eng,avg);

    if(avg>=60){
        printf("grade A");
    }else if((avg>=50) && (avg<60)){
        printf("grade B");
    }else if((avg>=40) && (avg<50)){
        printf("grade C");
    }else{
        printf("grade e");
    }

    return 0;
}