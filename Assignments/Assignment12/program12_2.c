#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////
//
//  Function Name : CheckZero
//  Description   : Accept number from user and check whether it contains zero or not
//  Input         : Integer
//  Output        : Boolean
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 04/11/2026
//
//////////////////////////////

BOOL CheckZero(int iNum){
    int iDigit = 0;

    if(iNum < 0){
        iNum = -iNum;
    }

    while(iNum != 0){
        iDigit = iNum % 10;
        if(iDigit == 0){
            return TRUE;
        }
        iNum = iNum / 10;
    }

    return FALSE;
}



int main(){
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE){
        printf("It contains zero");
    }
    else{
        printf("Their is no zero");
    }

    return EXIT_SUCCESS;
}