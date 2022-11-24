#include <stdio.h>

int main(){
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    if(marks>30){
        printf("PASS!!");
    }
    else if(marks<=30){
        printf("FAIL!!");
    }
    return 0;
}