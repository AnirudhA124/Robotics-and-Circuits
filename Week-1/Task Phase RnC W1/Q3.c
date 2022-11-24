<<<<<<< HEAD
#include <stdio.h>

int main(){
    int number_days, years, weeks, days;
    printf("Enter the number of days:");
    scanf("%d",&number_days);
    years=number_days/365;
    weeks=(number_days%365)/7;
    days=(number_days%365)-(weeks*7);
    printf("The number of years:%d\n",years);
    printf("The number of weeks:%d\n",weeks);
    printf("The number of days:%d\n",days);
    return 0;
=======
#include <stdio.h>

int main(){
    int number_days, years, weeks, days;
    printf("Enter the number of days:");
    scanf("%d",&number_days);
    years=number_days/365;
    weeks=(number_days%365)/7;
    days=(number_days%365)-(weeks*7);
    printf("The number of years:%d\n",years);
    printf("The number of weeks:%d\n",weeks);
    printf("The number of days:%d\n",days);
    return 0;
>>>>>>> a85ebff (Update 1)
}