#include<stdio.h>
int main(){
    printf("Enter The Number to check : ");
    int num,counter=0;
    scanf("%d",&num);
    int i=2;
    while((num/2)>=i){
        if((num%i)==0){
           counter=counter+1;
        } 
        i++;
    }
    if(counter==0){
        printf("This is a prime number.");
    }
    else{
        printf("This is not a prime number.");
    }
    
}