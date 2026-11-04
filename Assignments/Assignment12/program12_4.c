#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : CountFour
//  Description   : Accept number from user and count the frequency of the digit 4
//  Input         : Integer
//  Output        : Integer
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 04/11/2026
//
//////////////////////////////

int CountFour(int iNum){
    int iDigit = 0;
    int iCount = 0;

    if(iNum < 0){
        iNum = -iNum;
    }

    while(iNum != 0){
        iDigit = iNum % 10;
        if(iDigit == 4){
            iCount++;
        }
        iNum = iNum / 10;
    }

    return iCount;
}



int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("Frequency of 4 is : %d", iRet);

    return EXIT_SUCCESS;
}