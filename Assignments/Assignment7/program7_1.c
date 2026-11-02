#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : Pattern
//  Description   : Display a pattern of $ and * symbols
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 01/11/2026
//
//////////////////////////////

void Pattern(int iNo){
    int iCnt = 0;

    if(iNo < 0){
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++){
        printf("$\t*\t");
    }
}

int main(){
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}