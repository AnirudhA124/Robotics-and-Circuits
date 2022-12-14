<<<<<<< HEAD
#include <stdio.h>

int main(){
    float p;
    int items_cost[3];
    printf("Enter cost for item1:");
    scanf("%d",&items_cost[0]);
    printf("Enter cost for item2:");
    scanf("%d",&items_cost[1]);
    printf("Enter cost for item3:");
    scanf("%d",&items_cost[2]);
    p=items_cost[0]+items_cost[1]+items_cost[2];
    printf("The final cost of the items(inc. of GST) is:%f",p+((18*p)/100));
    return 0;
=======
#include <stdio.h>

int main(){
    float p;
    int items_cost[3];
    printf("Enter cost for item1:");
    scanf("%d",&items_cost[0]);
    printf("Enter cost for item2:");
    scanf("%d",&items_cost[1]);
    printf("Enter cost for item3:");
    scanf("%d",&items_cost[2]);
    p=items_cost[0]+items_cost[1]+items_cost[2];
    printf("The final cost of the items(inc. of GST) is:%f",p+((18*p)/100));
    return 0;
>>>>>>> a85ebff (Update 1)
}