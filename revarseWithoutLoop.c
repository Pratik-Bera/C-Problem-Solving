/* write a program  to revarse of a 4-digit number */
#include<stdio.h>
int main(){
    printf("Enter a 4-digit number :");
    int num,i1,i2,i3;
    scanf("%d",&num);                   //6537  rev = 7356 
    i1=num%10;                          // i1 store remainder. which is 7.
    num=num/10;                         //6537/10=653.7 store int part only. num=653
    i2=num%10;                          // i2=3;
    num=num/10;                         // num=65
    i3=num%10;                          // 65%10=5=i3
    num=num/10;                         //num=6             856=800+50+6
//    printf("%d%d%d%d",i1,i2,i3,num);    // 7356
    int rev=(i1*1000)+(i2*100)+(i3*10)+num; //7000+300+50+6=7356
    printf("reverse is %d",rev);
    return 0;
}