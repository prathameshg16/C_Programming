#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : MultipleDisplay
//  Description   : Accept a number n and print first 5 multiples of n
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 01/11/2026
//
//////////////////////////////

void MultipleDisplay(int iNo){
    int iCnt = 0;
    int iMultiple = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++){
        iMultiple = iCnt * iNo;
        printf("%d\t",iMultiple);
    }
}

int main(){
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}