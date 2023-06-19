/*A Program to check the largest between two number using conditional operator.*/
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter Two Number :");
    scanf("%d%d",&x,&y);
    (x>y)? printf("Larger is %d",x):printf("Larger is %d",y);

    return 0;
}