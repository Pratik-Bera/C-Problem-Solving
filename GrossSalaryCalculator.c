/*
Write a C program to input basic salary of an employee and 
calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/
#include<stdio.h> 
int main() {
    float basic_Sal,hra,da,gross_salary;
    printf("Enter Your Basic Salary :");
    scanf("%f",&basic_Sal);
    if(basic_Sal<= 10000){
        hra=(basic_Sal*20)/100;
        da=(basic_Sal*80)/100;
    }
    else if(basic_Sal <= 20000){
        hra=(basic_Sal*25)/100;
        da=(basic_Sal*90)/100;
        //gross_salary=basic_Sal+hra+da;
    }
    else{
        hra=(basic_Sal*30)/100;
        da=(basic_Sal*95)/100;
        //gross_salary=basic_Sal+hra+da;

    }
    gross_salary=basic_Sal+hra+da;
    printf("Your Total salary is %f : ",gross_salary);
     return 0; 
}