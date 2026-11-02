#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : FactorialDiff
//  Description   : Accept a number and print the difference between its even and odd factorials
//  Input         : Integer
//  Output        : Integer
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 02/11/2026
//
//////////////////////////////

int FactorialDiff(int iNo){
    int iFacteven = 1;
    int iFactodd = 1;
    int iFactdiff = 0;
    int iCnt = 0;

    if(iNo < 0){
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++){
        if(iCnt % 2 != 0){
            iFactodd = iFactodd * iCnt;
        }
        else{
            iFacteven = iFacteven * iCnt;
        }
    }

    iFactdiff = iFacteven - iFactodd;

    return iFactdiff;
    
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Difference between even and odd factorials is : %d\n",iRet);

    return EXIT_SUCCESS;
}