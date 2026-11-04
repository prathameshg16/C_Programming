#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : MultFact
//  Description   : Accept number from user and multiply all its factors
//  Input         : Integer
//  Output        : Integer
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 04/11/2026
//
//////////////////////////////

int MultFact(int iNo){
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0){
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++){
        if(iNo % iCnt == 0){
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}



int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors is : %d", iRet);

    return EXIT_SUCCESS;
}