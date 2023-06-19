/*Check Palindrome or Not of 3 digit number without using loop*/
#include<stdio.h>
int main(){
    int num,n1,n2,rev,rem;
    printf("Enter a 3 digit number :");
    scanf("%d",&num);
    rem=num;
    n1=rem%10;              //156  6
    rem=rem/10;             //15
    n2=rem%10;              //15   5
    rem=rem/10;             //1
    rev=((n1*100)+(n2*10)+(rem));
    printf("reverse number is : %d\n",rev);
    if(num==rev) 
        printf("It's palindrome.");
    else
        printf("It's not palindrome.");

    return 0;

}