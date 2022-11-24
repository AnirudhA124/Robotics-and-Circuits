<<<<<<< HEAD
#include <stdio.h>

int main(){
    int a,b,sum,t;
    printf("Enter number1:");
    scanf("%d",&a);
    printf("Enter number2:");
    scanf("%d",&b);
    sum=a+b;
    while(sum>b){
       sum=sum-b;
       t++; 
    }
    printf("The Quotient is:%d",t);
    return 0;
=======
#include <stdio.h>

int main(){
    int a,b,sum,t;
    printf("Enter number1:");
    scanf("%d",&a);
    printf("Enter number2:");
    scanf("%d",&b);
    sum=a+b;
    while(sum>b){
       sum=sum-b;
       t++; 
    }
    printf("The Quotient is:%d",t);
    return 0;
>>>>>>> a85ebff (Update 1)
}