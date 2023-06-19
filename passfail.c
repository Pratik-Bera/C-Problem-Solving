/*A program to check a student pass or fail and also calculate the Grade and percentage of the student .
*If the student got below 25 in 2 or more than 2 subjects then he failed.otherwise he passed. */
#include<stdio.h>
int main(){
    int s1,s2,s3,s4,s5,counter=0;
    float per;
    printf("Enter the number of 5 subjects ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    if(s1<25)
        counter=counter+1;
    if(s2<25)
        counter=counter+1;
    if(s3<25)
        counter=counter+1;
    if(s4<25)
        counter=counter+1;
    if(s5<25)
        counter=counter+1;
    printf("You are failed in %d subjects.\n",counter);
    if(counter>=2){
        printf("Oops, You are Failed !\n");
    }
    else{
        printf("Congratulation, You are passed.\n");
        per=(s1+s2+s3+s4+s5)/5;
        if(per==100){
            printf("grade = AA\n");
        }
        if((per>=90)&&(per<100)){
            printf("grade = A+\n");
            }
        else if((per>=80)&&(per<89)){
            printf("grade = A\n");
        }
        else if((per>=70)&&(per<79)){
            printf("grade = B+\n");
        }
        else if((per>=60)&&(per<69)){
            printf("grade = B\n");
        }
        else if((per>=50)&&(per<59)){
            printf("grade = C+\n");
        }
        else
            printf("grade = C\n");
        
    }
    printf("Your percentage is %f\n",per);
    return 0;
}