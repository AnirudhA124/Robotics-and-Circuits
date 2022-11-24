<<<<<<< HEAD
#include <stdio.h>

int main(){
    int arr[]={1,1,1,2,3,3,3};
    printf("Array is:");
    for(int i=0;i<7;i++){
        printf("%d,\t",arr[i]);
    }
    printf("\n");
    for(int i=0;i<4;i++){
        if(arr[i]==arr[i+1]==arr[i+2]){
            printf("A triple in present in the array!!");
            break;
        }
        else{
            printf("Triple not present in the array!!");
            break;
        }
    }
    return 0;
=======
#include <stdio.h>

int main(){
    int arr[]={1,1,1,2,3,3,3};
    printf("Array is:");
    for(int i=0;i<7;i++){
        printf("%d,\t",arr[i]);
    }
    printf("\n");
    for(int i=0;i<4;i++){
        if(arr[i]==arr[i+1]==arr[i+2]){
            printf("A triple in present in the array!!");
            break;
        }
        else{
            printf("Triple not present in the array!!");
            break;
        }
    }
    return 0;
>>>>>>> a85ebff (Update 1)
}