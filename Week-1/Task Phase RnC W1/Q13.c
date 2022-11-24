<<<<<<< HEAD
#include <stdio.h>

int addDigits(int num) {
        return num - (num - 1) / 9 * 9;
    }
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    printf("The desired output is:%d",addDigits(n));
    return 0;
=======
#include <stdio.h>

int addDigits(int num) {
        return num - (num - 1) / 9 * 9;
    }
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    printf("The desired output is:%d",addDigits(n));
    return 0;
>>>>>>> a85ebff (Update 1)
}