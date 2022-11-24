<<<<<<< HEAD
#include <stdio.h>

int main(){
    int firstno, secondno;
    int *first= &firstno;
    int *second= &secondno;
    printf("Enter First number:");
    scanf("%d",&firstno);
    printf("Enter second number:");
    scanf("%d",&secondno);

    if(*first>*second){
        printf("%d is the maximum number",*first);
    }
    else{
        printf("%d is the maximum number.",*second);
    }
    return 0;
=======
#include <stdio.h>

int main(){
    int firstno, secondno;
    int *first= &firstno;
    int *second= &secondno;
    printf("Enter First number:");
    scanf("%d",&firstno);
    printf("Enter second number:");
    scanf("%d",&secondno);

    if(*first>*second){
        printf("%d is the maximum number",*first);
    }
    else{
        printf("%d is the maximum number.",*second);
    }
    return 0;
>>>>>>> a85ebff (Update 1)
}