// WAP in c to print fibonacchi series
#include<stdio.h>
int main(){
    int n1;
    printf("Enter the value of n :");
    scanf("%d",&n1);
    int n2= 0;
    int n3 = 1;
    int i=2;
    printf("%d\t",n2);
    printf("%d\t",n3);
    int temp;
    while (n1>i)
    {
       temp=n2+n3;
       printf("%d\t",temp);
       n2=n3;
       n3=temp;
       i++;
    // temp++;
    }
}