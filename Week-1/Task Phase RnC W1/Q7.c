#include <stdio.h>

int main(){
    int xcoordinate,ycoordinate;
    printf("Enter the x-coordinate:");
    scanf("%d",&xcoordinate);
    printf("Enter the y-coordinate:");
    scanf("%d",&ycoordinate);
    
    if(xcoordinate>0 && ycoordinate>0){
        printf("The point is in the first Quderant!");
    }
    else if(xcoordinate<0 && ycoordinate>0){
        printf("The point is in the second Quderant!");
    }
    else if(xcoordinate<0 && ycoordinate<0){
        printf("The point is in the third Quderant!");
    }
    else if(xcoordinate>0 && ycoordinate<0){
        printf("The point is in the fourth Quderant!");
    }
    else{
        printf("The point is at origin!");
    }
    return 0;
}