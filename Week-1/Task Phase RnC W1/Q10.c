<<<<<<< HEAD
#include <stdio.h>

int main(){
    int n=5,p,q;
    for(int i=1;i<n;i++){
        if(i%2==0){
            p=1;
            q=0;
        }else{
            p=0;
            q=1;
        }
        for(int j=1;j<=i;j++){
            if(j%2==0){
                printf("%d",p);
            }else{
                printf("%d",q);
            }
        }
        printf("\n");
    }
    return 0;
=======
#include <stdio.h>

int main(){
    int n=5,p,q;
    for(int i=1;i<n;i++){
        if(i%2==0){
            p=1;
            q=0;
        }else{
            p=0;
            q=1;
        }
        for(int j=1;j<=i;j++){
            if(j%2==0){
                printf("%d",p);
            }else{
                printf("%d",q);
            }
        }
        printf("\n");
    }
    return 0;
>>>>>>> a85ebff (Update 1)
}