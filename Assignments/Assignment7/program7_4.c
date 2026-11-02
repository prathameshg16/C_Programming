#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : OddDisplay
//  Description   : Accept a number n and print all odd numbers till n
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 01/11/2026
//
//////////////////////////////

void OddDisplay(int iNo){
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++){
        if(iCnt % 2 != 0){
            printf("%d\t",iCnt);
        }
    }
}

int main(){
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}