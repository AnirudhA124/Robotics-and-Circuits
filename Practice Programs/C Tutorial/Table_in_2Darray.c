<<<<<<< HEAD
#include <stdio.h>

void storeTable(int arr[][] , int n, int m, int number);

int main(){
    int tables[2][10];
    storeTable( tables , 0,10,2);
    storeTable( tables , 1,10,3);
    
    for (int i=0; i<10; i++){
        printf("%d\t", table[0][i]);
    }
    for (int i=0; i<10; i++){
        printf("%d\t",table[1][i]);
    }
    return 0;

}

void storeTable(int arr[][], int n, int m, int number){
    for (int i=0; i<m; i++){
        arr[n][i]=number*(i+1);

    }
}

=======
#include <stdio.h>

void storeTable(int arr[][] , int n, int m, int number);

int main(){
    int tables[2][10];
    storeTable( tables , 0,10,2);
    storeTable( tables , 1,10,3);
    
    for (int i=0; i<10; i++){
        printf("%d\t", table[0][i]);
    }
    for (int i=0; i<10; i++){
        printf("%d\t",table[1][i]);
    }
    return 0;

}

void storeTable(int arr[][], int n, int m, int number){
    for (int i=0; i<m; i++){
        arr[n][i]=number*(i+1);

    }
}

>>>>>>> a85ebff (Update 1)
