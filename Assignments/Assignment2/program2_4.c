#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : Display
//  Description   : Display first number in second number of times
//  Input         : Integer,Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/10/2026
//
//////////////////////////////

void Display(int iNo, int iFreq){
    if(iFreq < 0){
        iFreq = -iFreq;
    }

    int iCnt = 0;
    for(iCnt = 1; iCnt <= iFreq; iCnt++){
        printf("%d\t",iNo);
    }
    
}

int main(){
    int iValue = 0;
    int iFreq = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    printf("Enter the frequency to run loop : ");
    scanf("%d",&iFreq);

    Display(iValue,iFreq);

    return EXIT_SUCCESS;
}