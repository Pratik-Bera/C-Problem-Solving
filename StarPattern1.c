/*Pattern Style 1

*
**
***
****
*****

*/
#include<stdio.h>
int main(){
    printf("Enter the number of last line star :\n");
    int n,row;
    scanf("%d",&n);
    row=1;
    int column=1;
    while(row<=n){
        column=1;
        while(column<=row){
            printf("* ");
            column++;
        }
        printf("\n");
        row++;
        
    }

}