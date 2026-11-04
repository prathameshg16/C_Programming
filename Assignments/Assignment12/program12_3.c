#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : CountTwo
//  Description   : Accept number from user and count the frequency of the digit 2
//  Input         : Integer
//  Output        : Integer
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 04/11/2026
//
//////////////////////////////

int CountTwo(int iNum){
    int iDigit = 0;
    int iCount = 0;

    if(iNum < 0){
        iNum = -iNum;
    }

    while(iNum != 0){
        iDigit = iNum % 10;
        if(iDigit == 2){
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

    iRet = CountTwo(iValue);

    printf("Frequency of 2 is : %d", iRet);

    return EXIT_SUCCESS;
}