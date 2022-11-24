#include <stdio.h>

int main(){
    int n,m;
    printf("Enter number of which the table is required:");
    scanf("%d",&n);
    printf("Enter the number till where the table is required:");
    scanf("%d",&m);

    for(int i=1; i<=m; i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}