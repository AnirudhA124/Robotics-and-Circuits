#include <stdio.h>

void printstring(char arr[]);

int main(){
    char fullName[]="AnirudhDaddy";
    printstring(fullName);
    return 0;

}

void printstring(char arr[]){
    for(int i=0; arr[i] != '\0';i++){
        printf("%c",arr[i]);
    }

}