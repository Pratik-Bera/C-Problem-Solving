#include<stdio.h>
int main(){
    int r1,r2,i=2,counter=0;
    printf("Enter the lower & upper bound of range for show the list of prime : ");
    scanf("%d%d",&r1,&r2);
    while(r1<=r2){
        while((r1/2)>=i){
            if((r1%i)==0){
                counter=counter+1;
            } 
            i++;
        }
        if(counter==0){
            printf("%d\n",r1);
        }
        else{
            counter=0;
        }
        r1++;
        i=2;
    }

    return 0;
}