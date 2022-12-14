<<<<<<< HEAD
#include <stdio.h>

int main(){
    int i=10;
    int *ptr=&i;
    int **pptr=&ptr;

    printf("%d",*(*(pptr)));
    return 0 ;
=======
#include <stdio.h>

int main(){
    int i=10;
    int *ptr=&i;
    int **pptr=&ptr;

    printf("%d",*(*(pptr)));
    return 0 ;
>>>>>>> a85ebff (Update 1)
}