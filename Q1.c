/*Q1. Develop a C program to check whether a given number is an Armstrong number or not,
demonstrating understanding of number manipulation and digit-based computations used in digital
verification systems.*/
#include <stdio.h>
#include<math.h>
int main(){
int num,n=0,sum=0,lastdigit;
 printf("enter num");
 scanf("%d", &num);
 int temp;
 temp=num;
 if(num==0){
    printf("%d is an amstrong number",num);
 }
 else{
 while(temp>0){
temp/=10;
++n;
 } 
 temp=num;
while(temp>0){
lastdigit=temp%10;
temp/=10;
sum+=pow(lastdigit,n);
}
if(sum==num)
printf("it is armstrong number");
else
printf("it is not armstrong number");
 }
    return 0;
}