#include <stdio.h>

int main(){
    int n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        sum=sum+i;
    }
    printf("Sum of first %d numbers is:%d",n,sum);
    return 0;
}