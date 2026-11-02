#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : Display
//  Description   : Display a pattern
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 02/11/2026
//
//////////////////////////////

void Display(int iNo){
    int iCnt = 0;

    if(iNo < 0){
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++){
        printf("*\t");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++){
        printf("#\t");
    }
}

int main(){
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}