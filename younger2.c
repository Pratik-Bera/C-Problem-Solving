/*Find Younger between 3 Person.*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the age of threeperson.");
    scanf("%d%d%d",&a,&b,&c);
    // if((a==b)&&(b==c)){        
    //     printf("They are equal");
    // }
    // if((a==b)||(b==c)||(a==c)){        
    //     printf("You entered same age for two person.");
    // }
    if((a<b)&&(a<c)){
        printf("First one is younger.");
    }
    else if((b<a)&&(b<c)){
        printf("Second one is younger.");
    }
    else{
        printf("Third one is Younger.");
    }
    return 0;
}