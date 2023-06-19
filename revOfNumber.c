#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the value of n :");
    scanf("%d",&n);
    while (n!=0)
    {
        int num = n%10;
        sum = sum*10+num;
        n=n/10;
    }
    printf("The reverse number is : %d\n",sum);
    
}