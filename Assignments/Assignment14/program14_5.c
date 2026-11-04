#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : FactDiff
//  Description   : Accept number from user and display difference of its non factors and factors sum
//  Input         : Integer
//  Output        : Integer
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 04/11/2026
//
//////////////////////////////

int FactDiff(int iNo){
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNon = 0;
    int iDiff = 0;

    if(iNo < 0){
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++){
        if(iNo % iCnt != 0){
            iSumNon = iSumNon + iCnt;
        }
        else{
            iSumFact = iSumFact + iCnt;
        }
    }

    iDiff = iSumFact - iSumNon;

    return iDiff;

}



int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Summation is : %d\n",iRet);

    return EXIT_SUCCESS;
}