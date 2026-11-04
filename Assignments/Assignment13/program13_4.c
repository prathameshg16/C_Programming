#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : MultDigits
//  Description   : Accept number from user and multiply all the digits
//  Input         : Integer
//  Output        : Integer
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 04/11/2026
//
//////////////////////////////

int MultDigits(int iNum){
    int iDigit = 0;
    int iMult = 1;

    if(iNum < 0){
        iNum = -iNum;
    }

    while(iNum != 0){
        iDigit = iNum % 10;
        iMult = iMult * iDigit;
        iNum = iNum / 10;
    }

    return iMult;
}



int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of digits is : %d", iRet);

    return EXIT_SUCCESS;
}