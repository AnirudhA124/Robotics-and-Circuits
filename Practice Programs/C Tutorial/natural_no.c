#include <stdio.h>

int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);

    if(n>=1){
        printf("The entered number is a natural number!!");
    }
    else{
        printf("The entered number isn't a natural number!!");
    }
    return 0;
}