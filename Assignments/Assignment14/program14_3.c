#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : NonFact
//  Description   : Accept number from user and display its non factors
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 04/11/2026
//
//////////////////////////////

void NonFact(int iNo){
    int iCnt = 0;

    if(iNo < 0){
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++){
        if(iNo % iCnt != 0){
            printf("%d\t",iCnt);
        }
    }

}



int main(){
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return EXIT_SUCCESS;
}