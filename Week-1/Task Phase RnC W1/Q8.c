#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter number1:");
    scanf("%d",&a);
    printf("Enter number2:");
    scanf("%d",&b);
    printf("Enter number3:");
    scanf("%d",&c);
    a>b && a>c ? printf("Biggest number is: %d",a): b>c ? printf("Biggest Number is: %d",b) : printf("Biggest number is: %d",c);
    return 0;
}