#include <stdio.h>

int main(){
    int arr1[100], arr2[100], arr3[100],n,j=0,k=0;
    printf("Enter number of elements to be added in array:");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        printf("Enter element %d:",i);
        scanf("%d",&arr1[i]);
    }

    for(int i=0; i<n; i++){
        if(arr1[i]%2==0){
            arr2[j]= arr1[i];
            j++;
        }
        else{
            arr3[k]=arr1[i];
            k++;
        }
    }
    printf("The even elements are:\n");
    for(int i=0; i<j;i++){
        printf("%d\n",arr2[i]);
    }
    printf("\nThe odd elements are:\n");
    for(int i=0; i<k;i++){
        printf("%d\n",arr3[i]);
    }
}