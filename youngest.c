
/* A program to find the youngest person between 3 persons..*/
#include<stdio.h>
int main()
{
 int a,b,c;
 printf("Enter the age of 3 person :");
 scanf("%d%d%d",&a,&b,&c);
 if((a<b)&&(a<c)){
  printf("%d is the youngest person of them.",a);
 }
 else if((a>b)&&(b<c)){
  printf("%d is the youngest person of them.",b);
 }
 else if((a>c)&&(b>c)){
  printf("%d is the youngest person of them.",c);
 }
 else
    printf("They are Equal aged");
 return 0;
}