#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : EvenFactorial
//  Description   : Accept a number and print its even factorial
//  Input         : Integer
//  Output        : Integer
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 02/11/2026
//
//////////////////////////////

int EvenFactorial(int iNo){
    int iFact = 1;
    int iCnt = 0;

    if(iNo < 0){
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++){
        if(iCnt % 2 == 0){
            iFact = iFact * iCnt;
        }
    }

    return iFact;
    
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial is : %d\n",iRet);

    return EXIT_SUCCESS;
}