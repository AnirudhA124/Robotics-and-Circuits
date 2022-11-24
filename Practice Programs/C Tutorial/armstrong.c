#include <stdio.h>
#include <math.h>

int main(){
    int n,p1,p2,p3,power1,power2,power3;
    printf("Enter a number(three digit):");
    scanf("%d",&n);
    p1=(n%10);
    p1=((n%100)/10);
    p1=((n%1000)/100);
    power1=pow(p1,3);
    power2=pow(p2,3);
    power3=pow(p3,3);
    if(n==power1+power2+power3){
        printf("The number is Armstrong Number!!");
    } else{
        printf("The Entered number is not a Armstrong Number!!");
    }
    return 0;
}