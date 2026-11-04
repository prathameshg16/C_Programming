#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : CountDiff
//  Description   : Accept number from user and return difference between even and odd sum
//  Input         : Integer
//  Output        : Integer
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 04/11/2026
//
//////////////////////////////

int CountDiff(int iNum){
    int iDigit = 0;
    int iSumEven = 0;
    int iSumOdd = 0;
    int iDiff = 0;

    if(iNum < 0){
        iNum = -iNum;
    }

    while(iNum != 0){
        iDigit = iNum % 10;
        if(iDigit % 2 == 0){
            iSumEven += iDigit;
        } else {
            iSumOdd += iDigit;
        }
        iNum = iNum / 10;
    }

    iDiff = iSumEven - iSumOdd;

    return iDiff;
}



int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Diiference is : %d", iRet);

    return EXIT_SUCCESS;
}