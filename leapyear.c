/*Leap Year Program using conditional Operator*/
#include<stdio.h>
int main(){
    int year;
    printf("Enter the year :");
    scanf("%d",&year);
    (((year%100==0)&&(year%400==0))||((year%100!=0)&&(year%4==0)))?
        printf("It is a leap year"):
        printf("It is not leap year");
    return 0;
}
