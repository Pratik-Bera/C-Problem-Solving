/* smallest number of note nedded to fullfill the amount */
#include<stdio.h>
int main(){
    int amt,tot_note,note2000,note500,note200,note100,note50,note20,note10,note5,note2,note1;
    printf("Enter the amount : ");      //5453
    scanf("%d",&amt);
    note2000=amt/2000;                  //note2000=2
    amt=amt%2000;                       //amt=1453
    note500=amt/500;                    //note500=2
    amt=amt%500;                        // amt=453
    note200=amt/200;                    // note200=2
    amt=amt%200;                        // amt =53
    note100=amt/100;                    //note100=0
    amt=amt%100;                        // amt=53
    note50=amt/50;                    //note50=1
    amt=amt%50;                        // amt=3
    note20=amt/20;                    //note20=0
    amt=amt%20;                        // amt=3
    note10=amt/10;                    //note10=0
    amt=amt%10;                        // amt=3
    note5=amt/5;                    //note20=0
    amt=amt%5;                        // amt=3
    note2=amt/2;                    //note2=1
    amt=amt%2;                        // amt=1
    note1=amt/1;                    //note1=1
    amt=amt%1;                        // amt=0
    tot_note=note2000+note500+note200+note100+note50+note20+note10+note5+note2+note1;
    printf("Total number of note needed : %d",tot_note);
    return 0;
}