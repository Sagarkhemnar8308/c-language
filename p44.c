#include<stdio.h>
int main(){
 int day1=30;
 int day2=29;
 int day3=30;
 int day4=31;
 int day5=30;
 int day6=33;
 int day7=30;
 int day8=36;
 int day9=30;
 int day10=37;
 

int add=day1+day2+day3+day4+day5+day6+day7+day8+day8+day9+day10;
int rate=37.60;

int pay=add*rate;

int bonus=2;

int bonus2=bonus*add;

int bonus1=bonus2+pay;

printf("payment is %d",pay);
printf("\ntotal payment is %d",bonus1);
return 0;
}