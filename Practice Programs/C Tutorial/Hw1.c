#include <stdio.h>

int main(){
    int a,b,c,average;
    printf("Enter number 1:");
    scanf("%d",&a);
    printf("Enter number 2:");
    scanf("%d",&b);
    printf("Enter number 3:");
    scanf("%d",&c);
    average=(a+b+c)/3;
    printf("The average is: %d",average);
    return 0;
}