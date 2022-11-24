#include <stdio.h>
#include <string.h>

void revstr(char*str);

int main(){
    char str[100];
    printf("Enter a string:");
    gets(str);

    printf("The string before reversing is: %s\n",str);

    revstr(str);
    printf("The reversed string is: %s\n", str);
    return 0;

}

void revstr(char *str){
    int len,t;
    len= strlen(str);

    for(int i=0; i<len/2; i++){

        t=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=t;
    }
}