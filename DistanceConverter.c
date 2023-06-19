/*meter to Kilo-Meter Converter.*/
#include<stdio.h>
int main(){
    float km,m;
    printf("Enter the value in meter :");
    scanf("%f",&m);
    km=m/1000;
    printf("The Kilo-Meter value is : %f",km);
    return 0;
}