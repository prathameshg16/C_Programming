#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : CountRange
//  Description   : Accept number from user and count the frequency of the digit between 3 and 7
//  Input         : Integer
//  Output        : Integer
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 04/11/2026
//
//////////////////////////////

int CountRange(int iNum){
    int iDigit = 0;
    int iCount = 0;

    if(iNum < 0){
        iNum = -iNum;
    }

    while(iNum != 0){
        iDigit = iNum % 10;
        if(iDigit > 3 && iDigit < 7){
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

    iRet = CountRange(iValue);

    printf("Count of digits between 3 and 7 is : %d", iRet);

    return EXIT_SUCCESS;
}